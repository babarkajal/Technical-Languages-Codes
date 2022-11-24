#include<stdio.h>

void main(){
		int i=10;
		int j=20;
		int a,b;
		a=++i + i++;
		b=j++ + ++j;
		printf("a=%d\n",a);//23
		printf("b=%d\n",b);//42
		printf("i=%d\n",i);//12
		printf("j=%d\n",j);//22
}

/* preincrement inc value i=i+1 return refernce of i and in postincrement the value is stored in temp varible i.e. temp=i and the inc the value i=i+1 and return temp.
e.g.  now i=10	
    1.++i ,i=11,return i;
    2.i++ ,temp=i,i=i+1=12  return temp=11;
    3.when again the refrence goes to the i ,now i=12
    4.12+11=23


*/
