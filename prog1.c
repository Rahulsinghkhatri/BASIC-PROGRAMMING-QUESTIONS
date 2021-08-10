//WAP to swap two numbers using third variable

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,temp;
    printf("Enter the two numners\n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping : a=%d , b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Numbers after swapping : a=%d , b=%d\n",a,b);
    return 0;

}