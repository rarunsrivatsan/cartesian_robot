%atiBlockInit
function atiOut=rec()
import java.io.*;
import java.net.*;
RDTPORT = 49152;
NetBoxIP = '192.168.1.1';
calmat=[1 1 1 25 25 35 250 250 250];
packetLength = 36;

headerMessage = hex2dec('1234');
packetCount = 0; %0 = infinity
RDTCommand = RDTCommandCreate(headerMessage, 1, packetCount);
dataGramPacketRDT = RDTCommandParse(RDTCommand);
addr = InetAddress.getByName(NetBoxIP);
packet = DatagramPacket(dataGramPacketRDT, length(dataGramPacketRDT));

socket = DatagramSocket();
socket.setSoTimeout(1500);
socket.connect(addr, RDTPORT);
receivePacket = DatagramPacket(zeros(1, packetLength), packetLength);
socket.send(packet);
socket.receive(receivePacket);
fields = getNetFTRDTPacket(receivePacket);
atiOut=double(fields)./(1e6.*calmat);
display(atiOut);
%pause(0.01);
end