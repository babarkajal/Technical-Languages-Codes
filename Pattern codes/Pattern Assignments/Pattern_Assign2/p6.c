#include<stdio.h>

void main(){
              
              int i,j;
              for( i=1;i<=5; i++){
                                   for( j=1 ; i+j <= 6 ; j++){
                                                               if(i % 2 != 0)
                                                                         printf("* ");
                                                              else
                                                                         printf("= ");
                                   }
                   
                   printf("\n");                
              }
}
