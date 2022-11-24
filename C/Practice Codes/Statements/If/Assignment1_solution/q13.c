//program to find greatest number among three

#include <stdio.h>
void main() {
       float n1, n2, n3;
       printf("eneter values");
       scanf("%f%f%f", &n1,&n2,&n3);      //accept values

       //check if first number is greater or equal than n2 and n3
       if(n1 >= n2 && n1 >= n3){
            printf("Largest number: %d",n1);
       }

       //check if second number is greater or equal than n1 and n3
       if(n2 >= n1 && n2 >= n3){
          printf("Largest number: %d",n2);
       }
       //check if third number is greater or equal than n2 and n1
       if(n3 >= n1 && n3 >= n2) {
          printf("Largest number: %d",n3);
       }

}
