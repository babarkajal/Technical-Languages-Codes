/*p5
  write a java program that student have less than or greater than 75% of attendance and check whether
  the student is eligible for exam or not take fucntion like this booleans isEligible
*/

class Exam {

        //method to check using ternary operator
        static boolean eligible(int att) {
                  //return true if first condition is true
                  return att>=75 ? true : false;
        }
        public static void main(String[] args) {
                  int attendance  = 74;
                  System.out.println("Using if else and ternary");
                  //call static function to check whether it is eligible
                  if(eligible(attendance)) {
                    System.out.println("Student is eligible");
                  }
                  else
                      System.out.println("Student is not eligible.Please attend the lectures");
        }
}
