//redefination of a identifier in the diffent scope

#include <stdio.h>

int a=10,b=20;
void main(){
		printf("the vlaue of a = %d,b = %d\n",a,b);
		{
			int a=30,b=40;
			printf("The values of a & b are %d & %d\n",a,b);
			{
				float a=1.1,b=2.2;
				printf("The values of a & b are %.1f & %.1f\n",a,b);
			}
		}
}
