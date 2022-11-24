/*Program 9. Write a Program to check Whether the Entered Number is Strong Number or Not. Until User, not exit. If User Enters 'N' Then Exit The Loop.
Input/Output:
Enter Number: 124
Output: It Is Not a Strong Number
Do you want to Continue ? 'Y'
Enter Number : 145
Output : It Is a Strong Number
Do you want to continue ? 'N'
Exit The Loop.
{Note:
Strong Number: The Sum of Factorial Of Each Digit In Entered Number Is Equal To That Number.
145: 1! + 4! + 5!
: 1 + 24 + 120
: 145
145 == 145, strong number. }
*/

#include <stdio.h>

//function to calculate factorial num
int factorial(int num) {
        int fact = 1;
        while(num) {
          fact =fact * num;
          num--;
        }
        return fact;
}

//function to check the num is strong or not
int isStrong(int num) {
        int copy = num,sum=0,rem;
        while(copy) {
            rem = copy%10;
            sum = sum + factorial(rem);
            copy /=10;
        }
        if(num == sum)
            return 1;
        else
            return 0;
}
void main() {
        int num;
        char ch='y';
        do {
            printf("Enter num to check whether it is storng or not: ");
            scanf("%d", &num);
            if(isStrong(num))
                printf("Yes, %d is Strong number\n", num);
            else
                printf("No, %d is not Strong number\n", num);

            printf("Want to chek more(press y/n): ");
            scanf(" %c",&ch);
        }while(ch=='y' || ch=='Y');

}
