function [ RDTPacket ] = getNetFTRDTPacket(packet)
    NUM_RDT_FIELDS = 9;
    
    RDTPacket = zeros(1,NUM_RDT_FIELDS, 'int32');
    data = packet.getData();
    
    for i = NUM_RDT_FIELDS:-1:1
        %display(data(i*4));
        %display(int32(data(i*4)));
        index = (i-1)*4 + 1;
        RDTPacket(i) = bitand(int32(data(index)), hex2dec('ff'));
        j = (i-1)*4 + 2;
        while j < ((i-1)*4 + 5)
            shiftedPacket = bitshift(RDTPacket(i), 8);
            RDTPacket(i) = bitor(shiftedPacket, bitand(int32(data(j)), ...
                hex2dec('ff')));
            j = j + 1;
        end
    end
end
            
        

