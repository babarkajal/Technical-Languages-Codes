#include<stdio.h>

int  change_Global_Varible_val();//function declaration

int giNumber;//Global varible


void main(){
	int ilnval;
	ilnval=change_Global_Varible_val(); //ilnval catch the returned value from the function
	printf("giNumber=%d\n\n",ilnval);

	ilnval=change_Global_Varible_val();
	printf("giNumber=%d\n\n",ilnval);

	ilnval=change_Global_Varible_val();
	printf("giNumber=%d\n\n",ilnval);
	
}


int change_Global_Varible_val() {
					int ilnval;
		 			printf("ENter the value: ");
					scanf("%d",&ilnval); //suppose value is 13
					giNumber = ilnval++ + ++ilnval + --ilnval + ilnval++;	
/*						 =13 + ilval + --ilnval + ilnval++
						 =13 + 15 + 14 + ilnval++
						 =13 + 15 + 14 + 14
						 = 56 
*/

return giNumber;//value returns to the main

}


















