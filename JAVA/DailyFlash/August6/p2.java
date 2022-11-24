/*p2: write a java progrma which accpets the student year and studenmt marks & using that student year & marks it will check student is eligible  or not for education scholarship by help of nested switch case
*/

class Program {

  public static void main(String[] args) {
            int marks=80;
            int year = 4;

           //1st switch for years
           switch(year) {
                    //for first year
                    case 1:
                            System.out.println("scholarship is not applicable for 1st year students");
                            break;
                    case 2:
                          System.out.println("scholarship is not applicable for 2nd year students");
                          break;
                    case 3:
                          System.out.println("You are a student of third year so lets check for marks");
                          //switch for marks
                          switch(marks/10) {
                                case 10:
                                       System.out.println("Yes applicable since marks are 100");
                                       break;
                                case 9:
                                      System.out.println("Yes applicable since marks are 90");
                                      break;
                                case 8:
                                      System.out.println("Yes applicable since marks are 80");
                                      break;
                                case 7:
                                      System.out.println("Yes applicable since marks are 70");
                                      break;
                                 default:
                                       System.out.println("Sorry!! Not applicable since marks are less than 70");
                                       break;
                          }//end of second switch
                         break;
                 default:
                        System.out.println("You have given wrong year");
                        break;

           }//end of 1st switch
  }//end of main
}//end of class
