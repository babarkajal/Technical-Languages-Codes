/* p2.Write a program to check whether the angle are obtuse or right or acute
*/

class Angle {
    public static void main(String[] args) {
          int angle = 80;
          if(angle < 90) {
                System.out.println("Angle is acute");
          }
          else if(angle > 90){
                System.out.println("Angle is obtuse");
          }
          else{
               System.out.println("Angle is right angle");
          }

    }
}
