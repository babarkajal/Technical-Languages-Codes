//Command line argument

class AddIntger {
  /*
    Here String[] movies is command line argument
  */
  public static void main(String[] args) {
    //args[0] = 10,  args[1] =20

    /*
      int i = args[0]+ args[1];         //here we are trying to store "1020" string into int i i.e class to primitive conversion
      //Error: incompatible types
      */

      //for conversion we need to type cast the values string - to
      // for that wrapper classes are used.
      int i = Integer.parseInt(args[0])+Integer.parseInt(args[1]);
      System.out.println("i = "+i);

      System.out.println("Float conversion = " + Float.parseFloat(args[2]));
    
   }
}
