/*p4
  write a java program that takes any character and check whether the character is vowel or consonant
*/

class Vowel {
      public static void main(String[] args) {
          char ch = 'e';
          //there are five vowels - a,e,i,o,u
          //If user entered any one out of them then it should print ' .. is vowel'  means if only one condition
          // is true then expression should evaluated to true. here we want  conditional statement i.e if
          //use it .for Condition which operator ?? -->OR(||)
          if( ch == 'a' || ch=='e' || ch=='i' || ch =='o' || ch=='u')
              System.out.println(ch + " Character is vowel");
          else if( ch == 'A' || ch=='E' || ch=='I' || ch =='O' || ch=='U')
              System.out.println(ch + " Character is vowel");
          else
              System.out.println(ch + " Character is consonant");
        }
}
