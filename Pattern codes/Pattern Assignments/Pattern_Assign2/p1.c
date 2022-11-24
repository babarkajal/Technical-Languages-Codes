#include<stdio.h>

void main(){
              char a='A';
              int i,j;
              for( i=1;i<=5; i++){
                                   for( j=1 ; j<=5 ; j++){
                                                               if(i+j<=6)
                                                                         printf(" %c ",a++);
                                                              
                                   }
                   a ='A'+i;
                   printf("\n");                
              }
}
