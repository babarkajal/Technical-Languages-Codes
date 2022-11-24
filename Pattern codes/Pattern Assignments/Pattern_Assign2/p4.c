#include<stdio.h>

void main(){
              char arr[]={'C','O','R','E'};
              int i,j,k;
              for( i=0;i< 4; i++){
                                   for( j=0 ; j < i ; j++)
                                                        printf("   "); 
                                                        
                                  
                                  for(k=j ; k < 4 ; k++)
                                                      printf(" %c ",arr[k]);               
                                                      
                                                   
                                  printf("\n"); 
                }                 
 }                  
                                  
              

