#include<stdio.h>

void  change_Global_Varible_val();//function declaration

int giNumber;//Global varible


void main(){

	change_Global_Varible_val(); 
	printf("giNumber=%d\n\n",giNumber);

	change_Global_Varible_val();
	printf("giNumber=%d\n\n",giNumber);

	change_Global_Varible_val();
	printf("giNumber=%d\n\n",giNumber);
	
}


void change_Global_Varible_val() {
					int ilnval;
		 			printf("ENter the value: ");
					scanf("%d",&ilnval); //suppose value is 13
					giNumber = ilnval++ + ++ilnval + --ilnval + ilnval++;	
/*						 =13 + ilval + --ilnval + ilnval++
						 =13 + 15 + 14 + ilnval++
						 =13 + 15 + 14 + 14
						 = 56 
*/



}


















