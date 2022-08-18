#include"main.h"

/**
*set_bit-Setsthevalueofabitatagivenindexto1.
*@n:Apointertothebit.
*@index:Theindextosetthevalueat-indicesstartat0.
*Return:Ifanerroroccurs--1.
*Otherwise-1.
*/
intset_bit(unsignedlongint*n,unsignedintindex)
{
if(index>=(sizeof(unsignedlongint)*8))
return(-1);

*n^=(1<<index);

return(1);
}
