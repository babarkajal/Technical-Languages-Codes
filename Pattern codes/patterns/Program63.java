

class Program63 {

	public static void main(String... arr){
	for(int i = 1;i<=7;i++){

		for(int j = 1;j<=7;j++){

			if((j-i)>0 || (i+j)>=9)
				System.out.print(" ");
			else
				System.out.print("*");
		}
		System.out.println();
	}

	}

}

/*
 *
 * mkars-MacBook-Air:patternsInJava omkarajagunde$ java Program63
*
**
***
****
***
**
*

*/
