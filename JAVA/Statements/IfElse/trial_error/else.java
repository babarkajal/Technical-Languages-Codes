class IfElseDemo {
    public static void main(String[] args) {
      else {                                    //error: else without if
        System.out.println("Hii");
      }

      //------------------------------------------------------------------------------
      if(true)
          System.out.println("Hii");
          System.out.println("Hello");      //this line separates else from if
      else                                  //dangling else:- shows error
          System.out.println("Else part");
        }
}
