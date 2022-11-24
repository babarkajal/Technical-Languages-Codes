//Command line argument
//Parameter for main should be an array because we are sending many arguments from the command line

class Sush {
  /*
    Here String[] movies is command line argument
  */
  public static void main(String... movies) {            // '...' : VarArgs : variable num of arguments
      System.out.println(movies[0]);  //MSDhoni
      System.out.println(movies[1]);  //kaiPoChe
      System.out.println(movies[2]);  //chhichore
      System.out.println(movies.length);
  }
}
