/* WAP to initialize an array of 10 integers elements at compile time :
   1. Display elememts of the array
   2. Find sum of elements of the array
   3. Find average of the array
   4. Display the elements which are greater than average
   5. Print the elements which are placed at even index  
   6. count the frequency of an element in the array
   7. count number of even elements in the array
   8. search whether the inputted element in the array exists or not 
   9. find the maximum and minimum elements of the array
   10.Insert an element into the array
   11.Delete an element from the array
   12.sort the array  */

#include<stdio.h>
#include<conio.h>
int main()
{
     int A[10],num,fe=0,num1,flag=0,feven=0,max,min;
     float sum=0,avg;
     printf("Enter the elements of the array :\n");
     for(int i=0;i<10;i++)
     {
         scanf("%d",&A[i]);
     }

     printf("\nDisplaying Elements of the array\n");
     for(int i=0;i<10;i++)
     {
         printf("%d\t",A[i]);
     }
     
     for(int i=0;i<10;i++)
     {
         sum=sum+A[i];
     }

     printf("\nSum of elements of the array is :%f",sum);
     avg=sum/10;
     printf("\nAverage of elements of the array is :%f",avg);

     printf("\nDisplaying the elements which are greater than average :\n");
     for(int i=0;i<10;i++)
     {
         if(A[i]>avg)
            printf("%d\t",A[i]);
     }
       
     printf("\nDisplaying the elements present at even position :\n");
     for(int i=0;i<10;i++)
     {
         if(i%2==0)
             printf("%d\t",A[i]);
     }
     
     printf("\nEnter the element whose frequency have to check :\n");
     scanf("%d",&num);
     for(int i=0;i<10;i++)
     {
         if(A[i]==num)
           fe=fe+1;
     }
     printf("Frequency of the number %d is %d :\n",num,fe);

     printf("Enter the number to be searched :\n");
     scanf("%d",&num1);
     for(int i=0;i<10;i++)
     {
         if(A[i]==num1)
            flag=1;
     }
     if(flag==1)
        printf("The number %d is present in the array\n",num1);
     else
        printf("The number %d is not present in the array\n",num1);

     for (int i = 0; i < 10; i++)
     {
         if(A[i]%2==0)
           feven=feven+1;
     }
     printf("The number of even elements in the array are :%d\n",feven);

     max=A[0];
     for(int i=1;i<10;i++)
     {
         if(max<A[i])
            max=A[i];
         else
          ;
     }
     printf("The maximum element in the array is :%d\n",max);

     min=A[0];
     for(int i=1;i<10;i++)
     {
         if(min>A[i])
            min=A[i];
         else
          ;
     }
     printf("The minimum element in the array is :%d\n",min);
     
     return 0;
}   