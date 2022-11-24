#include <stdio.h>
#include <stdbool.h>
void main() {
      //In c there is no any datatype names bool.It's given in C++.For that use _Bool or include <stdbool.h> header file
      // for _Bool type variable you can only give int values i.e 0  and 1 instead of true and false
      bool val=false, var=true;
      //if condition is false and it is terminated by semicolon
      if(val);{
          printf("true");   //true ==>it is an independent block
      }

      if(var)
      //if(true)
      {
         printf("false") ;      //false
      }
    }
