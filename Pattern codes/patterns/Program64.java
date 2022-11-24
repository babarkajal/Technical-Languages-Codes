
class Program64 {

	public static void main(String... arr){
	for(int i = 1;i<=7;i++){

		for(int j = 1;j<=4;j++){

			if((i+j)<5 || (i-j)>=4)
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
 * omkars-MacBook-Air:patternsInJava omkarajagunde$ java Program64
   *
  **
 ***
****
****
 ***
  **
   *
omkars-MacBook-Air:patternsInJava omkarajagunde$

*/
