class IfDemo {
  public static void main(String[] args) {
      if(true) {
          System.out.println("Hii");      //Hii
      }

      if(14) {                            //Imcompatible type error
        System.out.println("hello");
      }

      if(4.5f)  {                          //Imcompatible type error
        System.out.println("Floating point value");
      }
  }
}

//overall if statement accepts only boolean values not any other but it works in C and C++
