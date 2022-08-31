#include<stdio.h>

/**
*main->assignarandomnumbertothevariableneachtimeitisexecuted
*andprintthelastdigitofthenumberstoredinthevariablen
*Return:Always0(Success)
*/
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);/*thisisanasciicodefornewline*/

return (0);
}
