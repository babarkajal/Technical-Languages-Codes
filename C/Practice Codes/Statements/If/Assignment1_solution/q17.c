//we have to find greatest num among three and then check whether that num is true
//task is
//firts find greater num then check odd or even

#include<stdio.h>

        void main() {


            int a1, a2, a3;

                printf("enter values:");
                scanf("%d %d %d",&a1,&a2,&a3);                    //get that three num consider it as 10 35 20


                //how cay we say a num is greater than other ???means here 35 is greater how?
                //        beacuse 35 > 10 and 35 > 20
                // notice the word and i.e. it should satisfies both condistions

                //this condition is used to check whether first num is greater or not

                 if(a1 >= a2 && a1 >= a3) {
                      // 10 >= 35 && 10 >=20
                      // false && false
                      // false

                       printf("Largest number:%d\n",a1);
                      //if a1 is greater then check for even odd
                       if(a1%2==0) {

                  			 printf("%d entered no is even number:\n",a1);
                       }else{

                  			 printf("%d entered no is odd number:\n",a1);
                       }
                  }

                 //this condition is used to check whether second num is greater or not
                 if(a2 >= a1 && a2 >= a3) {                                                   //true means 35 is greater
                   // 35 >= 35 && 35 >=20
                   // ture && true
                   // true

		                    printf("Largest number:%d\n",a2);
                        //if a1 is greater then check for even odd
                         if(a2%2==0) {

                    			 printf("%d entered no is even number:\n",a2);
                         }else{

                    			 printf("%d entered no is odd number:\n",a2);
                         }
                  }
                 //this condition is used to check whether third num is greater or not
                 if(a3 >= a1 && a3 >= a2) {
                    // 20 >= 10 && 20 >=35
                    // true && false
                    // false

                      printf("Largest number:%d\n",a3);
                      //if a1 is greater then check for even odd
                       if(a3%2==0) {

                  			 printf("%d entered no is even number:\n",a3);
                       }else{

                  			 printf("%d entered no is odd number:\n",a3);
                       }

		           }
}
