#include<stdio.h>

void main(){
              
              int i,j;
              for( i=0 ; i<=4 ; i++){
                                   for( j=0 ; j<=4 ; j++){
                                                          if(i+j<=4)
                                                              printf("%d%d ",i,j);
                                                              
                                   }
                 
                   printf("\n");                
              }
}
