open_system('xpcosc');
set_param('xpcosc','RTWVerbose','off'); % Configure for a non-Verbose build.
rtwbuild('xpcosc');                     % Build and download application.
 
%You should see this on the screen:
% ### Starting Simulink Real-Time build procedure for model: xpcosc
% ### Successful completion of build procedure for model: xpcosc
% ### Looking for target: TargetPC1
% ### Download model onto target: TargetPC1
%%
tg = SimulinkRealTime.target;           % Create a Simulink Real-Time target object
tg.SampleTime = 0.000250;               % Set sample time to 250us
tg.StopTime   = 10000;                  % Set stop time to a high value (10000s) 
% Define target scope objects 1, 3, 6 and 7: vectorization is used.
scs = addscope(tg, 'target', [1,3,6,7]); 
% Get indices of signals 'Integrator1', 'Signal Generator'
signals(1) = getsignalid(tg, 'Integrator1');        % Get index of signal 'Integrator1'
signals(2) = getsignalid(tg, 'Signal Generator');   % Get index of signal 'Signal Generator' 
addsignal(scs, signals);                % Add signals to all scope objects
 % Simultaneously setting properties for all element of a scope vector
% must be done with the SET command.
set(scs,'Decimation',1)                 % Set decimation factor 
% Set scope 1 properties.
set(scs(1), ...
    {'NumSamples', 'TriggerMode', 'Grid', 'DisplayMode',   'YLimit'}, ...
    {200,          'FreeRun',     'On',   'Redraw', [-10, 10]});
 % Set scope 3 properties.
set(scs(2), ...
    {'NumSamples', 'TriggerMode', 'TriggerSignal', 'TriggerLevel', ...
     'TriggerSlope', 'Grid', 'DisplayMode'}, ...
    {500,  'Signal',  getsignalid(tg, 'Signal Generator'),    0.0, ...
     'Rising',       'Off',  'Redraw'});
 % Set scope 6 properties.
set(scs(3), 'NumSamples',100, 'TriggerMode', 'Software', 'DisplayMode', 'Numerical'); 
% Set scope 7 properties.
set(scs(4), ...
    {'NumSamples', 'TriggerMode', 'TriggerScope', 'Grid', 'DisplayMode'}, ...
    {2000,         'Scope',       3,              'On',   'Redraw'}); 
% Set Y axis limits of all scopes in one command.
set(scs([1,2,4]), 'YLimit', 'Auto'); 
start(scs);                             % Start acquisition of all scopes
start(tg);                              % Start simulation
trigger(scs(3));                        % Software trigger scope 6
  
%Capture an Image of the Target Computer Video Display
pause(1);                               % Wait for 1 sec after the run
tg.viewTargetScreen;                    % Snapshot of target computer video display