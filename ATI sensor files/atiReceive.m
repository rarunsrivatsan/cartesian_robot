function [output]=atiReceive(addr,RDTPORT,packet,calmat)
% import java.io.*;
% import java.net.*;

socket = DatagramSocket();
socket.setSoTimeout(1500);
socket.connect(addr, RDTPORT);
receivePacket = DatagramPacket(zeros(1, 36), 36);
socket.send(packet);
socket.receive(receivePacket);
fields = getNetFTRDTPacket(receivePacket);
output=double(fields)./(1e6.*calmat);
display(output);A
end