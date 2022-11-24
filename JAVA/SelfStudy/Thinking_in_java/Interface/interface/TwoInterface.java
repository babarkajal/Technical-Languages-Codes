interface I1 {
      void play();
      int jump(int i);
}

interface I2 {
    void jump();
}

class student  {
    void hello(){System.out.println("hello");};
    void jump() {
      System.out.println("student jump");
    }
}
class Activity extends student implements I1 {
      public void play() {
        System.out.println("Student plays game");
      }
      // public void jump(){
      //     System.out.println("His jump is so high");
      // }
      public int jump(int i){
          System.out.println("His jump is so high"+i);
          return 0;
      }
      public static void main(String[] args) {
        Activity a = new Activity();
        a.jump();
        a.play();
        a.jump('k');
        a.hello();
      }
}
