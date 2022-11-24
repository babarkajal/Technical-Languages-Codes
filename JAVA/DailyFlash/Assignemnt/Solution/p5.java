/*Program 5: Write a program to print the ASCII value of individual character from a
string (take hardcoded value)
e.g : abcd
output : a= 97,b = 98,c=99,d=100*/

class Program {
    public static void main(String[] args) {
          String str= "kajal";
          System.out.println("ASCII code of each letter from string "+str);
          for(int i=0; i<str.length() ; i++)
              System.out.println(str.charAt(i)+ " = "+ (int)str.charAt(i));
    }
}
