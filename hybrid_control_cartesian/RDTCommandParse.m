function [dataGram] = RDTCommandParse(RDTCommand)
	dataGram = zeros(1, 8);

	%Parsing header
	MSHeader = bitand(bitshift(RDTCommand.header, -8), hex2dec('ff'));
	LSHeader = bitand(RDTCommand.header, hex2dec('ff'));
	dataGram(1) = uint8(MSHeader);
	dataGram(2) = uint8(LSHeader);

	%Parsing command
	MSCommand = bitand(bitshift(RDTCommand.command, -8), hex2dec('ff'));
	LSCommand = bitand(RDTCommand.command, hex2dec('ff'));

	dataGram(3) = uint8(MSCommand);
	dataGram(4) = uint8(LSCommand);

	%Parsing count

	count1 = bitand(bitshift(RDTCommand.count, -24), hex2dec('ff'));
	count2 = bitand(bitshift(RDTCommand.count, -16), hex2dec('ff'));
	count3 = bitand(bitshift(RDTCommand.count, -8), hex2dec('ff'));
	count4 = bitand(RDTCommand.count, hex2dec('ff'));

	dataGram(5) = uint8(count1);
	dataGram(6) = uint8(count2);
	dataGram(7) = uint8(count3);
	dataGram(8) = uint8(count4);
end



	