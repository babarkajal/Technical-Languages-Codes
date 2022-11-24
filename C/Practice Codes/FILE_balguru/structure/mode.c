// mode :-
#include<stdio.h>
void main(){
	FILE *fp=fopen("Demo.txt","r");
	printf("%d\n",stdin->_mode);
	printf("%d\n",stdout->_mode);
	printf("%d\n",stderr->_mode);
	printf("fp=%d\n",fp->_mode);
}
