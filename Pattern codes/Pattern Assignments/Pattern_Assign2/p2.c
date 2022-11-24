#include<stdio.h>

void main(){
              int a=9;
              int i,j,k;
              for( i=1;i<=5; i++){
                                   for( j=1 ; j < i ; j++)
                                                        printf("  "); 
                                                        
                                  int temp=a;
                                  for(k=j ; k<=5 ; k++,temp -= 2)
                                                   printf("%d ",temp);
                                  
                                 
                   a -=2;
                   printf("\n");                
              }
}
