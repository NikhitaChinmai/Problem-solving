//Decimal to Octal conversion
#include<stdio.h>
void dectooctal(int n)
{
    if(n>7){
    dectooctal(n/8);
}
printf("%d",n%8);
}
int main()
{
   int n;
   printf("enter the decimal number:");
   scanf("%d",&n);
   dectooctal(n);
}
