//WAP to swap two numbers without using third variable

#include<stdio.h>
#include<conio.h>

int main()
{
        int a,b;
        printf("Enter the two numbers\n");
        scanf("%d%d",&a,&b);
        printf("Numbers before swapping : a=%d , b=%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("Numbers after swapping : a=%d , b=%d\n",a,b);
        return 0;
}
