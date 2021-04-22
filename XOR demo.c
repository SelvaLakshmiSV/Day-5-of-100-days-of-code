#include<stdio.h>
int main()
{
   int a=4,b=3;
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   printf("%d %d",a,b);//a = 3 b = 4
   return 0;
}
/*Output
3 4
*/
