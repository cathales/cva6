require_rv64;
require_extension(EXT_XZBP);
WRITE_RD(sext32(~((~RS1) << (RS2 & 0x1F))));
