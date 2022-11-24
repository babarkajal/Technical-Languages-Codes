/*Program 5: Write a Java code considering your favorite sports/games i.e. either indoor or outdoor (if
more than one game, make one class for each game) which must have at least one static variable,
instance variable, static method and one instance method.
*/

class Carom{
        int gameNo ;
        static int caromboard = 1;         //1 for ok and if breaked then 0
        int numberOfPlayers;

        void showGame() {
            System.out.println("Game no "+ gameNo + " Game has started with "+ numberOfPlayers + " players");
        }
        static void boardStatus() {
          System.out.println("board status is "+ caromboard);
        }
}

class Sport {
        public static void main(String[] args) {
          Carom match1 = new Carom();
          match1.gameNo = 1;
          match1.numberOfPlayers = 4;
          match1.showGame();
          match1.boardStatus();

          System.out.println("Match-2 infomation");
          Carom.caromboard = 0;
          Carom match2 = new Carom();
          match2.gameNo = 2;
          match2.numberOfPlayers = 3;
          match2.showGame();
          match2.boardStatus();

        }
}
