/*Program 3: What will be the output of the statement if i=5, j=4
1. (i++ >= j++) && (--j < i++)
2. (--i < j--) || (j++ >= ++i)
*/
class Operators {
    public static void main(String[] args) {
            int i=5, j = 4;
            boolean ans ;
            ans = (i++ >= j++) && (--j < i++);
            /*
              operator and
                = (5 >= 5) && (--j < i++)       i = 6 , j =5
                = true && (4 < 6)               i = 7, j = 4
                = true && true
                = true
            */
            System.out.println("Ans = "+ans);       //true
            System.out.println("i = "+i);         //7
            System.out.println("j = "+j);         //4

            ans = (--i < j--) || j++ >= ++i;

            /*
              operator or ||
              = (6 < 4) || (j++ >= ++i)       i = 6 , j = 3
              = false || (3 >= 7)               i = 7, j = 4
              = false || false
              = false
          */
            System.out.println("Ans = "+ans);     //false
            System.out.println("i = "+i);         //7
            System.out.println("j = "+j);         //4
          }
  }
