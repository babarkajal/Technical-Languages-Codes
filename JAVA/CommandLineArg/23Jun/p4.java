//Command line argument

class AddIntger {
  /*
    Here String[] movies is command line argument
  */
  public static void main(String[] args) {
      System.out.println(args[0]+args[1]);      //args[0] = 10,  args[1] =20  => 1020
      // here 10 and 20 is a string i.e whatever we take from command line it considered as string so 10+20 concatanates to the 1020
   }
}
