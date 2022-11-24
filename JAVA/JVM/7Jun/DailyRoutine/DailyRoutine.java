class Study {
        //instance
        String subject = "Java book";
        //static
        static int timeSpent = 5;

        void read() {
          System.out.println("Study time");
          System.out.println("read");
        }

        static void showTime() {
          System.out.println("Today I spent "+ timeSpent + " hrs for study");
        }
}//end of class

class Food {
      //instance
      String menu = "DalRice";
      //static
      static int amtMasala = 200;

      void make() {
        System.out.println("Today's menu "+ menu);
      }

      //sttaic ,method
      void tasty() {
        System.out.println("masal used for taste "+ amtMasala);
      }
}//end of class


class DailyRoutine {
  public static void main(String[] args) {
      Study nightStudy = new Study ();            //object created
      nightStudy.read();                          //read Java book
      nightStudy.showTime();
      nightStudy.subject = "C";
      nightStudy.read();

      Food dinner = new Food();
      dinner.menu = "Puran poli";
      dinner.make();
      dinner.tasty();
      Food.amtMasala = 500;           //changed static var

      Food lunch =  new Food();
      lunch.make();
      lunch.tasty();
  }
}
