/* write a program to declare one variable of any type and print its address (Remeber this address or just copy it). Then in the same program declare one pointer and assign the address of previous variable that you got in the output(hexadecimal value) and try to dereference it
(Explain the output in comments)
*/

#include <stdio.h>

void main() {
        //-------This is one part of program

        //declare one variable
        int var = 30;
        printf("Address of var = %p\n", &var);
        //run this part of program and Remember address of var

        //after execution I got this address for variable var: 0x7fff069fca54
        //assign this address to the pointer
        int* ptr = 0x7fff069fca54;


        printf("Value of var = %d\n",*ptr);     //segmentation fault
        /*
        we think that it is address of variable var and it will give value of var after dereferencing the variable.

        This gives run time error that is segmentation fault because the address we have assigned is virtual address and and internally address mapping is done
        */ 



}
