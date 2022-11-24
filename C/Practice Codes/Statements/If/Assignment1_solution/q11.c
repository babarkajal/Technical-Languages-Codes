#include <stdio.h>

void main() {

        int number1, number2;
        printf("Enter two integers: ");
        //accept two integers from user
        scanf("%d %d", &number1, &number2);     //assume number1 = 20 and number2 = 15

        //check wheather first num is greater or equal than second
        if (number1 >= number2)
        // 20 >= 15
        // true
        {
            //check wheather they are equal
            if (number1 == number2)
            //20 == 15
            //false  => go to else part
            {
                printf(" %d = %d",number1,number2);
            }

            else {
              printf(" %d > %d", number1, number2);             //20 > 15
            }
        }

        //if number1 < number2 then this part will be executed
        else {
            printf(" %d < %d",number1, number2);
        }
}
