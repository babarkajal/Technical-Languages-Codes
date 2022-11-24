/*3. write a c program to print even numbers between 50 to 70
*/


#include<stdio.h>

void main()  {
        //declare two variables to store values taken from user
        int start,end;

        printf("Enter range start and end: ");
        //scan two values from user
        scanf("%d%d",&start,&end);


        printf("Even numbers from %d to %d:\n",start,end);
        for(int i=start;i<=end;i++)  {
                //even numbers are the numbers which gives modulas 0 when divide by 2
                if(i%2==0)  {

                        printf("%d\n",i);
                }
        }
}
