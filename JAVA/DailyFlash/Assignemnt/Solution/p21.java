/*Program 22: Write a program to check whether given hardcoded char is a vowel or a consonant.
Follow the outline.
1. Take a String to only store if vowel, then sVar: “Vowel”
2. Otherwise sVar: “Consonant”
3. Use the switch statement to print whether it is a vowel or consonant using
input to switch as sVar.
*/

class Program {
    public static void main(String[] args) {
          char ch = 'E';
          String sVar;

          //check whether vowel or consonant
          if(ch == 'a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')
              sVar = "Vowel";
          else if(ch == 'A' || ch =='E' || ch=='I' || ch=='O' || ch=='U')
              sVar = "Vowel";
          else
              sVar = "Consonant";

          switch(sVar) {
                 case "Vowel":
                    System.out.println(ch + " is a vowel");
                    break;
                case "Consonant":
                     System.out.println(ch + " is a Consonant ");
                     break;
          }
    }

}
