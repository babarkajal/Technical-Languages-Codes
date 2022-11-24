//Program 2: Write a Program that uses Nested Switch Case, Take Real-Time Scenario and write a code around that.

#include <stdio.h>


void main(void) {
        int age;                //variable for age
        char choice;            // variable for taking choice
        int floorNo;
        //take age and floorNo from user
        printf("Enter the floor num of your home: ");
        scanf("%d",&floorNo);
        printf("Entre your age: ");
        scanf("%d",&age);

        //if your age is >= 65 then you should use the lift
        if(age>=65) {
              choice = 'l';
        }
        //if your age is 30-65 then it will be ok take stairs upto 2 floors for your health
        else if( (age<65 && age >= 30) && floor <= 2){
               choice = 's';
        }
        else if(age<30 && floor floar <= 4) {
              choice = 's';
        }
        else {
            choice = 'l';
        }
        
        switch(choice) {
              case 's':
                      printf("Use stairs for your journey");
                      break;
              case 'l':
                      printf("Use lift for your journey");
                      break;
              default:
                      printf("You have choosen wrong option");
                      break;

         }

}
