#include<stdio.h>
int main()
{
   int var;
   int num;
   printf("%d",var);
   num = (var = 15,var+35);
   printf("%d",num);
   return 0;
}
//50
