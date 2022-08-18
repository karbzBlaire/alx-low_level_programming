#include"main.h"

/**
*get_bit-Getsthevalueofabitatagivenindex.
*@n:Thebit.
*@index:Theindextogetthevalueat-indicesstartat0.
*Return:Ifanerroroccurs--1.
*Otherwise-Thevalueofbitatindex.
*/
intget_bit(unsignedlongintn,unsignedintindex)
{
if(index>=(sizeof(unsignedlongint)*8))
return(-1);

if((n&(1<<index))==0)
return(0);

return(1);
}
