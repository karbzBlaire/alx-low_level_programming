#include"main.h"

/**
*get_endianness-Checkstheendianness.
*Return:Ifbig-endian-0.
*Iflittle-endian-1.
*/
intget_endianness(void)
{
intnum=1;
char*endian=(char*)&num;

if(*endian==1)
return(1);

return(0);
}
