//write a program to find whether the character is an alphabet , a digit or a special character
class Program {
    public static void main(String[] args) {
        char ch = '6';
        if(ch>='A' && ch<='Z' || ch >='a' && ch <='z')
            System.out.println(ch+ " is a alphabet");
        else if(ch>=48 && ch <= 57)
            System.out.println(ch + " is a number");
        else
          System.out.println(ch+" is a special character");
    }
}
/*
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
A is a alphabet
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ javac p3.java
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
6 is a number
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$
*/
