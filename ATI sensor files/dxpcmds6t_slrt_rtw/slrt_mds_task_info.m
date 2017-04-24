function [taskInfo, numtask ] = slrt_mds_task_info()
   taskInfo(1).samplePeriod = 0.001;
   taskInfo(1).sampleOffset = 0;
   taskInfo(1).taskPrio = 48;
   taskInfo(1).taskName = 'Model1_R1';
   taskInfo(2).samplePeriod = 0.001;
   taskInfo(2).sampleOffset = 0;
   taskInfo(2).taskPrio = 48;
   taskInfo(2).taskName = 'Model2_R1';
   taskInfo(3).samplePeriod = 0.002;
   taskInfo(3).sampleOffset = 0;
   taskInfo(3).taskPrio = 47;
   taskInfo(3).taskName = 'Model1_R2';
   taskInfo(4).samplePeriod = 0.003;
   taskInfo(4).sampleOffset = 0;
   taskInfo(4).taskPrio = 46;
   taskInfo(4).taskName = 'Model1_R3';
   taskInfo(5).samplePeriod = 0.003;
   taskInfo(5).sampleOffset = 0;
   taskInfo(5).taskPrio = 46;
   taskInfo(5).taskName = 'Model2_R3';
   taskInfo(6).samplePeriod = 0.004;
   taskInfo(6).sampleOffset = 0;
   taskInfo(6).taskPrio = 45;
   taskInfo(6).taskName = 'Model1_R4';
   taskInfo(7).samplePeriod = 0.004;
   taskInfo(7).sampleOffset = 0;
   taskInfo(7).taskPrio = 45;
   taskInfo(7).taskName = 'Model2_R4';
   numtask = 7;
   for i = 1:numtask
      if ( 0 == isnumeric(taskInfo(i).samplePeriod) )
         taskInfo(i).samplePeriod = evalin('base', taskInfo(i).samplePeriod);
      end
      if ( isempty(taskInfo(i).taskName) )
         taskInfo(i).taskName = ['AutoGen' i ];
      end
   end
end

