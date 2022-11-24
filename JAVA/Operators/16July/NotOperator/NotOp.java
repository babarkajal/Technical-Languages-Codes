class NotOp {
    public static void main(String[] args) {
          boolean var = true;
          System.out.println("!var = "+ !var);                        //false
          var = false;
          System.out.println("!var = "+ !var);                        //true
          System.out.println("var = "+var);                           //var remains unchanged
    }
}
