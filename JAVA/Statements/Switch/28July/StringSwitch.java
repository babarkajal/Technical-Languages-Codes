//string can be used in switch statement

class StringSwitch  {
  public static void main(String[] args) {
        String name = new String("Hello");
        
        switch(name) {
          case "hello":
                System.out.println("hello");
                break;
          case "Hello":
                System.out.println("Hello");
                break;
          default:
                System.out.println("Default statement");
                break;
        }

  }
}
