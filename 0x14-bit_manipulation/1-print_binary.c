#include"main.h"

/**
*print_binary-Printsthebinaryrepresentationofanumber.
*@n:Thenumbertobeprintedinbinary.
*/
voidprint_binary(unsignedlongintn)
{
if(n>1)
print_binary(n>>1);

_putchar((n&1)+'0');
}
