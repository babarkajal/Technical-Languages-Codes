/*defualt added things:
  1. import java.lang.*;
  2. extends object
  3. constructor
      -ExamCancel()
        - x = 10
        - y = 30
  4. static block
      - z = 20    :-to initilize static varible 
*/
class ExamCancel {
      int x = 10;
      static int z =20;
      int y = 30;

      void happy() {
        System.out.println("Happy:)");
      }

      static void decisionPending() {
        System.out.println("Angry faces");
      }
}
/*implicitly added
  1.extend Object
  2.constructor
    -Student()
*/
class Student {
  public static void main(String[] args) {
        ExamCancel e = new ExamCancel();
        e.happy();    //Happy:)

        //decisionPending();      //error : cannot find symbol
        /* the class Student doesn't know the decisionPending() method.*/
        e.decisionPending();           //Angry faces
        //we can call static method on objects also

        ExamCancel.decisionPending(); //Angry faces

  }
}
