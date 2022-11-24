/*
Program 1: Write a C Program that accepts two double variables from user and print
only 2 precision. Moreover, do all arithmetic operation on them.
Input:
First Double value: 12.745
Second Double Value: 10.2229
*/

#include <stdio.h>

void main()  {
        //num1 , num2
        //type: double
        //initial value: garbage Value
        //declared to store two numbers
        double num1,num2;

        printf("Enter two double values: ");
        scanf("%lf%lf",&num1 , &num2);

        //here we have to print only two digits after decimal point
        // %.wf
        //      w specifies the number of digits to be printed on console
        printf("Entered values are %.2lf and %.2lf\n",num1,num2);

        printf("Addition: %.2lf\n", num1+num2 );           //Addition using '+' operator
        printf("Substraction: %.2lf\n", num1-num2);        //Substraction using '-' operator
        printf("Multiplicaiton: %.2lf\n", num1*num2 );     //Multiplicaiton using '*' operator
        printf("Division: %.2lf\n", num1/num2);             //Division using '/' operator


        //printf("Modulus: %d\n",num1 % num2 );         //error: invalid operands to binary operator %
        //note here we can use % opertor only on integer values
}
