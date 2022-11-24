#include<stdio.h>
 
int main()
{
      int a = 10;
      int far *ptr_var;
      *ptr_var = &a;
      printf("%d", sizeof(ptr_var));
      return 0;
}
