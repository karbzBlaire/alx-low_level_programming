#include"main.h"

/**
*flip_bits-Countsthenumberofbitsneededtobe
*flippedtogetfromonenumbertoanother.
*@n:Thenumber.
*@m:Thenumbertoflipnto.
*Return:Thenecessarynumberofbitstofliptogetfromntom.
*/
unsignedintflip_bits(unsignedlongintn,unsignedlongintm)
{
unsignedlongintxor=n^m,bits=0;

while(xor>0)
{
bits+=(xor&1);
xor>>=1;
}

return(bits);
}
