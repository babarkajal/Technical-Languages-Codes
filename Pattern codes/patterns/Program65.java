
import java.util.*;
class Program65 {

	public static void main(String[] arr){

		Scanner sc  = new Scanner (System.in);
		int row = sc.nextInt();

		for(int i = 1;i<=row;i++){

			for(int j = 1;j<=row;j++){

				if((j-i)>=1 && (i+j)<row+1 || (i+j)>=row+2 && (i-j)>0)
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
 * omkars-MacBook-Air:patternsInJava omkarajagunde$ java Program65
20
*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *
omkars-MacBook-Air:patternsInJava omkarajagunde$ java Program65
5
*   *
** **
*****
** **
*   *
omkars-MacBook-Air:patternsInJava omkarajagunde$ java Program65
8
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
omkars-MacBook-Air:patternsInJava omkarajagunde$


*/
