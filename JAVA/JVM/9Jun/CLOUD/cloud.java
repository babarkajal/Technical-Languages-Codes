//this is a class for AWS services

class AWS {
        //AWS provides num of services its  static count because if class means AWS founder can change it
        static int numberOfServices = 212;

        //instance variable because it changes as per object
        int numberOfEmployee = 0;

        void services() {
          System.out.println("AWS provides "+ numberOfServices + " servieces");
        }
        void employee() {
            System.out.println(numberOfEmployee+" are working in AWS");
        }
}//..

class GCS {
      //AWS provides num of products its  static count because if class means AWS founder can change it
      static int numberOfProducts = 90;

      //instance variable because it changes as per object
      int numberOfEmployee = 0;

      void services() {
        System.out.println("GCS has "+ numberOfProducts + " products");
      }

      void employee() {
          System.out.println(numberOfEmployee+" are working in GCS");
      }
}



class CloudServieces {
  public static void main(String[] args) {
      AWS seattle = new AWS();
      //consider employess are 100000;
      seattle.numberOfEmployee = 10000;

      seattle.services();
      seattle.employee();

      //now AWS changed the numberOfServices
      AWS.numberOfServices = 312;
      seattle.services();

      GCS sydney = new GCS();
      //consider employess are 20000;
      sydney.numberOfEmployee = 200000;

      sydney.services();
      sydney.employee();

      //now GCS changed the numberOfProducts
      GCS.numberOfProducts = 150;
      sydney.services();
    }
}
