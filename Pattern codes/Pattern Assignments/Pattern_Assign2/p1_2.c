#include<stdio.h>

void main(){
              char a='A';
              int i,j;
              for( i=1;i<=5; i++){
                                   for( j=1 ; i+j<=6 ; j++){
                                                         
                                                            printf(" %c ",a++);
                                                              
                                   }
                   a ='A'+i;
                   printf("\n");                
              }
}
