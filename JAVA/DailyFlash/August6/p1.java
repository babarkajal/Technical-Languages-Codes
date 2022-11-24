/* p1
  write a java program which accpets the months num provide that num to switch case and print the num of days is that month
*/

class Program {
  public static void main(String[] args) {
        int month = 9;     //tried for 34, 2, 7,9
        //pass motnhs to the switch
        switch(month) {
           case 1:
               System.out.println("January has 31 days");
               break;
           case 2:
                System.out.println("February Month which contains 29 days for leap year and 28 for non-leap years");
               break;
           case 3:
               System.out.println("March has 31 days");
               break;
           case 4:
               System.out.println("April has 30 days");
               break;
           case 5:
               System.out.println("May has 31 days");
               break;
           case 6:
               System.out.println("Jun has 30 days");
               break;
           case 7:
               System.out.println("July has 31 days");
               break;
           case 8:
               System.out.println("August has 31 days");
               break;
           case 9:
               System.out.println("Sepetmber has 30 days");
               break;
           case 10:
               System.out.println("October has 31 days");
               break;
           case 11:
               System.out.println("November has 30 days");
               break;
           case 12:
               System.out.println("December has 31 days");
               break;
          default:
                System.out.println("Oops!! You trying to print days of the month which is not present in calender:(");
                break;
             }//end switch
  }//end main
}//end classs
