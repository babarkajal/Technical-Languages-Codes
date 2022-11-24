/*Program 3. Write a C Program that print Fahrenheit-to-Celsius conversion table for 0
to 100 degree F.*/



#include<stdio.h>

void main()  {

	float fahrenheit=0;  	//type float
				//intialize to zero

	while(fahrenheit<=100)  {	//condition false when fahrenheit become 101


		float celsius=(fahrenheit-32)/1.8000;    //calculate fahrenheit into celsius and stored in variable.
		
		//float c=(fahrenheit-32)*5/9;
		
		printf("%f = %f\n",fahrenheit,celsius);
		fahrenheit++;
	}


}
