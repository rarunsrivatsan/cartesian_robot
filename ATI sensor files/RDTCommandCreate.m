function [c] = RDTCommandCreate(header, command, count)
	c.header = uint16(header);
	c.command = uint16(command);
	c.count = uint32(count);
end