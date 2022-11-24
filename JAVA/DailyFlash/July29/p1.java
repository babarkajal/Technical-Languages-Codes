/*write a java program to take integer between 1 to 7 and dispaly the name of the weekdays using switch */

class Program {
    public static void main(String[] args) {
          int day = 10;

          //switch statment  to print its respective day in word
          switch(day) {
                case 1:
                      System.out.println("Monday");
                      break;
                case 2:
                      System.out.println("Tueday");
                      break;
                case 3:
                      System.out.println("Wednesday");
                      break;
                case 4:
                     System.out.println("Thursday");
                     break;
                case 5:
                     System.out.println("Friday");
                     break;
                case 6:
                     System.out.println("Saturday");
                     break;
                case 7:
                      System.out.println("Sunday");
                      break;
                default:
                      System.out.println("Wrong num");
             }

  }
}
