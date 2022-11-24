#include<stdio.h>
void main (){

  int n;
  printf("Enter no. of rows:\n");
  scanf("%d",&n);

  int cnt = n*2-1;
  char ch = 'A';
  for(int row = 1;  row<=n; row++,cnt-=2)

  {

      if(row%2==0)
        ch+=4;
      for(int space = 1; space<row; space++)
        printf("  ");

      for(int col=1,incCh = ch; col<=cnt; col++,incCh++)
      {
        if(row%2==0)
            printf("= ");
        else
            printf("%c ",incCh);

      }
            printf("\n");


}
}
