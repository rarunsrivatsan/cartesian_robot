% Working.
%Sets up a connection to the net box and 
%read data from it in real time

dpath = {'D:\ATI\Matlab\ATINetFT.jar'};
import java.io.*;
import java.net.*;
 

RDTPORT = 49152;
LOCALPORT = 9091;
NetBoxIP = '192.168.1.1';


%netBox = udp(NetBoxIP,RDTPORT,'LocalPort',LOCALPORT); %netbox ip
%netBox = udp(NetBoxIP,LOCALPORT,'LocalPort',RDTPORT); 

%get(netBox, {'Name', 'LocalPort'}) %should print information
                          %about the netBox connection
%fopen(netBox)

headerMessage = hex2dec('1234');
packetCount = 0; %0 = infinity


RDTCommand = RDTCommandCreate(headerMessage, 1, packetCount);

dataGramPacketRDT = RDTCommandParse(RDTCommand);
display(dataGramPacketRDT);
addr = InetAddress.getByName(NetBoxIP);
packet = DatagramPacket(dataGramPacketRDT, ...
    length(dataGramPacketRDT));
socket = DatagramSocket();
socket.connect(addr, RDTPORT);
socket.setSoTimeout(1500);
packetLength = 36;
receivePacket = DatagramPacket(zeros(1, packetLength), packetLength);

socket.send(packet);
% Line which receives data actually.
socket.receive(receivePacket);

fields = getNetFTRDTPacket(receivePacket);

% Calibration matrix
calmat=[1 1 1 25 25 35 250 250 250];
display(double(fields)./(1e6.*calmat));
% 
% for i = 1:10
%    a = socket.receive(receivePacket);
% end
% 
% socket.receive(receivePacket);
% socket.close;
% display(dataGramPacketRDT)
% fwrite(netBox, dataGramPacketRDT)
% 
% b = fread(netBox, 36, 'int32')
% fclose(netBox);
% delete(netBox);

