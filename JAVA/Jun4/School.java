/*implicitly added things:
  1. import java.lang.*;
  2. extends object
  3. constructor
      -Shala()
        - noOfNotebook = 10
        - benchNo = 2
  4. static block
      - blackboard = 1    :-to initilize static varible
*/
class Shala {
        /* shalet astna Notebook  and bench he pratekla seprate asat
         * means every object has its own copy
         */
        int noOfNotebook = 10;
        int benchNo = 2;

        /* but blackboard ha ekch asto
        *comman to all
        */
        static int blackboard = 1;

        //non static method
        void gruhpat(){
          System.out.println("Gruhpat zala nasel tr mar khaycha");
          System.out.println("No of Notebooks: "+noOfNotebook);
          System.out.println("fvrt bench: "+ benchNo);
        }

        //static method
        static void prathana(){
          System.out.println("Morning la prathana mhna");
        }

}
/*implicitly added
  1.extend Object
  2.constructor
    -Student()
*/
class Student {
      public static void main(String[] args) {
        Shala student1 =  new Shala();
        student1.gruhpat();

        student1.prathana();
        Shala.prathana();
      }
}
