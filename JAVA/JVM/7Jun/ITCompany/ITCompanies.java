class Capgemini {
      //static var
      static int noOfEmp = 200000;
      //instance var
      int projectCount = 200;

      //instance method
      void displayProject() {
        System.out.println("Capgemini Project count "+ projectCount);
      }

      //static method
      static void empInfo() {
        System.out.println("Capgemini Num of employees " + noOfEmp);
    }
}//end of class

class TCS {
       //static var
       static int noOfEmp = 300000;
       //instance var
       int projectCount = 350;

       //instance method
       void displayProject() {
           System.out.println("TCS Project count "+ projectCount);
       }

       //static method
       static void empInfo() {
           System.out.println("TCS Num of employees " + noOfEmp);
       }
}//end of class



//main class
class ITCompany  {
      public static void main(String[] args) {
          Capgemini pune = new Capgemini();       //object created
          pune.displayProject();                  //Capgemini Project count = 200
          pune.empInfo();                         //Capgemini num of emp = 200000
          pune.projectCount = 170;              //instance var changed not static
          pune.displayProject();                //Capgemini projectCount = 170

          Capgemini chennai = new Capgemini();       //object created
          pune.displayProject();                     //Capgemini Project count = 200
          pune.empInfo();                            //Capgemini num of emp = 200000
          pune.projectCount = 30;                   //instance var changed not static
          pune.displayProject();                   //Capgemini projectCount = 30

          TCS mumbai = new TCS();
          mumbai.displayProject();                //TCS projectCount = 350
          mumbai.empInfo();                       //emp count = 300000
          mumbai.projectCount = 250;
          mumbai.displayProject();                //projectCount = 250

          TCS banglore = new TCS();
          banglore.displayProject();              //TCS  projectCount = 350
          banglore.empInfo();                     //TCS emp count = 300000
          banglore.projectCount = 100;
          banglore.displayProject();              //Porject count = 100
      }
}
