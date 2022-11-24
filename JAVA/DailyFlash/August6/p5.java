/* write a java program to print the table of 3 and also check which numbers are even in that table
*/


class Program {
    public static void main(String[] args){

        //use for loop for printing table of 3
        System.out.println("Table of three and also check even or not");
        for(int i = 1; i<=10; i++) {
              System.out.print(3*i+" ");
              if((3*i) %2==0)
                  System.out.println(" is even num ");
              else
                  System.out.println(" is odd num");
        }//..for

      }
    }
