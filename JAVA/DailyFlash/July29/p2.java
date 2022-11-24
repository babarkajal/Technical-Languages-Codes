/*
  write a program to toggle a single character i.e if a letter is a upper case convert it in lower case and if a  letter is in lower case convert it into upper case
*/

class Program {
    public static void main(String[] args) {
      char ch = 'k';
      //upper case : ascii range 65 - 90 or use letters 'A' to 'Z'
      if (65 <= ch && ch <= 90) {       // 'A'<=ch or ch <= 'Z'
        System.out.println("Toggle case is "+ (char)(ch+32));
      }

      //lower case ascii range 97-122
      else if(97 <= ch && ch <= 122)
          System.out.println("Toggle case is "+ (char)(ch-32));

     }
}

//here we are substracting and adding 32 in ch because there is difference of 32 in ascii values of capital and small letters
