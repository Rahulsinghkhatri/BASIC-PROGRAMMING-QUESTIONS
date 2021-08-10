//WAP to check palindrome number 

#include<stdio.h>
#include<conio.h>

int main()
{
   int n,a,sum=0,temp;
   printf("Enter the number to be checked");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       a=n%10;
       sum=(sum*10)+a;
       n=n/10;
   }
   if(temp==sum)
   {
       printf("The given number is palindrome\n");
   }
   else
       printf("The given number is not palindrome\n");
   return 0;
}
