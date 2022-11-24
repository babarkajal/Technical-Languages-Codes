//Access elements from command line

class Sush {
  /*
    Here String[] movies is command line argument
  */
  public static void main(String[] movies) {
              System.out.println(movies[1]);
              System.out.println(movies[2]);
              System.out.println(movies[3]);
  }
}

//RunTime exception: ArrayIndexOutOfBoundsException
//Here we are accessing array elements but the array is null i.e movies.length = 0
