% Working.
%Sets up a connection to the net box and 
%read data from it in real time

dpath = {'D:\ATI\Matlab\ATINetFT.jar'};
import java.io.*;
import java.net.*;
RDTPORT = 49152;
LOCALPORT = 9091;
NetBoxIP = '192.168.1.1';
calmat=[1 1 1 25 25 35 250 250 250];
packetLength = 36;

headerMessage = hex2dec('1234');
packetCount = 0; %0 = infinity
RDTCommand = RDTCommandCreate(headerMessage, 1, packetCount);
dataGramPacketRDT = RDTCommandParse(RDTCommand);
addr = InetAddress.getByName(NetBoxIP);
packet = DatagramPacket(dataGramPacketRDT, length(dataGramPacketRDT));
tic;
while toc<1
    atiReceive(addr,RDTPORT,packet,calmat);
    pause(0.01);
end