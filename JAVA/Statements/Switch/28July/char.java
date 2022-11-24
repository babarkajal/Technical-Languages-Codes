

class Char {
  public static void main(String[] args) {
        //char is of 2 byte so range is 0-65535

        char a = (char)65536;         //round of the value
        System.out.println("Character is "+ a);     //A
        System.out.println("ascii is "+(int)a);

        for(int i=0; i<=65535; i++)
              System.out.print((char)i+"  ");
  }
}
