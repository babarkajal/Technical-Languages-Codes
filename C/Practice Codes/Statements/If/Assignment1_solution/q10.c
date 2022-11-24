/*
Question 10. Try out following code snippet & explain the output.
*/
#include<stdio.h>
void main(void) {
        int aNum = 0;                               //aNum = 0
        char aChar;                                 //aChar

        if(!aNum){                                 //!aNum :- aNum value is 0 that is false make its reverse i.e 1 means true
                                                   //so it will execute the if statement
             printf("Inside First If...\n");       //Output=>Inside first if
             aNum += 20;                           // aNum = aNum+20 = 0+20 = 20
             aChar = "T";                          //aChar = "T" gives warning beacuse we are storing string into char
        }

        if(aNum % 4 != 0){                        //if conditions is aNUm %4 != 0
                                                  //20 % 4 != 0 ==> 0 != 0 i.e false so it will no execute

            printf("Inside Second If...\n");
            aNum -= 20;
            aChar = "F";
        }

        if(aNum == 0) {                           //false  ==> 20 == 0 so this will not execute
               printf("Inside Third If...\n");
               aChar = "T";
        }

        //this is not within any if so this will print the string on console
        printf("After all IF, Values Are..., %d & %d\n", aNum, aChar);      //aNum = 20 and aChar will hold garbage value
}
