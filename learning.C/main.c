#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float pint;
   int cup,ounce,spoon,teaspoon;

   printf("请输入杯数：");
   scanf("%d",&cup);
   pint = cup / 2;
   ounce = cup * 8;
   spoon = ounce * 2;
   teaspoon = spoon * 2;
   printf("%d杯分别是%1f品脱，%d盎司，%d汤勺，%d茶勺",cup,pint,ounce,spoon,teaspoon);

   return 0;
}
