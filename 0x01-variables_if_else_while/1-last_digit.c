#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
*main->assignarandomnumbertothevariableneachtimeitisexecuted
*andprintthelastdigitofthenumberstoredinthevariablen
*Return:Always0(Success)
*/
intmain(void)
{
intn;
intx;

srand(time(0));
n=rand()-RAND_MAX/2;

x=n%10;
printf("Lastdigitof%dis%d",n,x);
if(x>5)
{
printf("andisgreaterthan5");
}
if(x==0)
{
printf("andis0");
}
if(x<6&&x!=0)
{
printf("andislessthan6andnot0");
}

printf("\n");

return(0);
}
