//Write a program to check whether the character is vowel or consonant
class Program {
  public static void main(String[] args) {
      char ch = 'r';
      if(ch=='A' || ch =='E' || ch=='I' || ch=='O' || ch=='U')
          System.out.println(ch + " is a vowel");
      else if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')
          System.out.println(ch+ " is a Vowel");
      else
          System.out.println(ch+ " is a consonant");
  }
}
/*kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
A is a vowel
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ javac p2.java
^[[Akajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
u is a Vowel
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ javac p2.java
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
r is a consonant
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$
*/
