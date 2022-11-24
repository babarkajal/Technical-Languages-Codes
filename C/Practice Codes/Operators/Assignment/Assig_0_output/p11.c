#include <stdio.h>

void main() {
    int a = 10, b = 20, ans = 0;
    ans  = a > 2 + b != 20;
    /*
    	 Operatos are used:
    	 	> , + , !=
    	 According to precedence rule
    	 	+ has highest priority than > ,!= then  > and then != 
    	 so addition first will be done
         = a > 22 != 20
         then relational operator > . 10 > 22 => false(0) will return
         = 0 != 20 	--> 0 != 20 => returns 1 
          = 1
      */
    printf("Ans = %d\n", ans);

}
