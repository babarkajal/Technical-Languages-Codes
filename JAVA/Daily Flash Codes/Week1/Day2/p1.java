/*write a prorgam to check whether the character is alphabet  or not*/

class Program {
    public static void main(String[] args) {
        char ch = '5';
        if(ch>='A' && ch<='Z' || ch >='a' && ch <='z')
            System.out.println(ch+ " is a alphabet");
        else
            System.out.println(ch + " is not an alphabet");
    }
}

/*kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ javac p1.java
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
A is a alphabet
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ javac p1.java
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
5 is not an alphabet
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$
*/
