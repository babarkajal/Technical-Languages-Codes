class Core2web {
      static int totalNumStud = 2500;
      int batchCount = 0;

      void displayStud() {
        System.out.println("Total student count = "+ totalNumStud);
        System.out.println("batch Count "+batchCount);
      }

}

class Core2webApp {
    static int totalLogin  = 1000;
    int videoCount = 0;

    void displayStat() {
      System.out.println("Total login in app "+ totalLogin);
      System.out.println("Total video count "+ videoCount);
    }
}


class Mentor {
    public static void main(String[] args) {
          Core2web  java9_10= new Core2web();     //object created
          java9_10.batchCount = 370;
          java9_10.displayStud();


          Core2web ppa5 = new Core2web();
          ppa5.batchCount = 290;
          ppa5.displayStud();

          Core2webApp python0 = new Core2webApp();
          python0.videoCount = 10;
          python0.displayStat();

    }
}
