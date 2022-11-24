
#include<stdio.h>
void main()
{
  int age;
  printf("Enter the age: ");
  scanf("%d",&age);
   if(age<0)
     {
       printf("Age is invalid\n\n");
     }
  else
      printf("Age is valid\n\n");
}
