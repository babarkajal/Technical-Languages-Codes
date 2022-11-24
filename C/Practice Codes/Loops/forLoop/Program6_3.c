
#include <stdio.h>

void main() {

       char ch;

       printf("Enter character: ");
       scanf("%c",&ch);

       for(int i=1;i<=26;i++)  {

         //if ASCII range between 97-122 means small letter then substract 32 from them because differenc between A-a is 32
         if(ch>=97  && ch <=122)  {

           printf("%c=%c\n",ch,ch-32);
         }
         else  {

           printf("%c=%c\n",ch,ch+32);
         }

         ch++;

}


}
