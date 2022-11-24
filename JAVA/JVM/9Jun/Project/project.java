class Project {

      //static var
      static int projectCount = 4;
      //instance variable
      int noOfModels = 0;

      //instance method
      void weeklyReport() {
            System.out.println("Project count is "+projectCount);
            System.out.println("noOfModels worked in a week "+noOfModels);
      }
}


class Tester {

    //stativ variable
    static boolean isBug = false;
    //instance variable
    int noOfBug = 10;

    //instance method
    void testing() {
      System.out.println("Has any bug "+ isBug);
      System.out.println("Number of bug found "+noOfBug);
    }
}


class ProjectManager {
        public static void main(String[] args) {
          Project developer1 = new Project() ;      //object created on heap
          developer1.noOfModels = 4;
          developer1.weeklyReport();               //stack frame pushed for weeklyReport

          //stack frame popped

          Project.projectCount = 5;         //changed static variable
          /*static variables are placed in method area we can access them
            first we have to go to the object then find special structure address over there and from special structure
            static change visible to all objects
          */

          Project developer2 = new Project();   //object  created on heap and reference is stored here
          developer2.noOfModels = 5;
          developer2.weeklyReport();            //stack frame pushed
          //stack frame popped

          Tester tester = new Tester();         //object created on heap
          tester.isBug = true;
          tester.testing();                     //stack frame pushed
          //stack frame popped
        }
}
