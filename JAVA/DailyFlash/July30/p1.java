//take a num and print its relative day in words
class Program {
            public static void main(String[] args) {
                int day = 9;

                //use switch to print the day in word
                switch(day) {                                   //her we have passed the day to switch means integer value so it will
                                                                      //match the given day to the case values if not found then it will goes to the default part
                  case 1:
                      System.out.println("Monday");
                      break;
                  case 2:
                       System.out.println("Tuesday");
                       break;
                  case 3:
                        System.out.println("wednesday");
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
                      System.out.println("Wrong day num");
                      break;

                }

            }


}
