#include<stdio.h>

void main(){
              char a='A';
              int i,j;
              for( i=5;i>0; i--){
                              
                                 printf(" %c ",a++);
                                 if(i==1)
                                    i=5-i;  
             }
              //     a ='A'+i;
                   printf("\n");                
              
}
