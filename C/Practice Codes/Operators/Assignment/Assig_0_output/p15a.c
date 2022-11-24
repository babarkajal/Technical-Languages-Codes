#include <stdio.h>
void main() {
		int x = 10, y =20;
		int ans = 0;
		//1.
		ans= (x < 10) && (++x && ++y);
		/*	= (10 < 10) && (++x  && ++y)
		 *	= 0
		 *	First value is false so there is no need to check second one.The entire expression becomes false
		 */
		printf("Ans = %d\n", ans); //0
		printf("X = %d\n", x);	//10
		printf("Y = %d\n", y); // 20

		//2.
 		ans= (++y > 10)|| (++x && ++ y);
		/*  = (21 > 10) || (++x && ++y)		// y =21
		 *  = 1
		 *  First exp is true so entire expression is true. So it will not evalutes second one
		 */
		printf("Ans = %d\n",ans); //1
		printf("X = %d\n", x);		// 10
		printf("Y = %d\n", y);		// 21

 		//3.
		ans = (++x != 10) || ++y;
		/*  = (11 > 10) || ++y		// x= 11
		 *  = 1 			// first evalutes to true
		 */
		printf("Ans = %d\n",ans); //1
		printf("X = %d\n", x);		// 11
		printf("Y = %d\n", y);		// 21
}
