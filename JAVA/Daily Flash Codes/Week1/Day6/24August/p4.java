/*
Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100*/
class Program {
    static int count = 1;
    static void printOdd(int num ) {

         if(count++<=50) {
            System.out.print(num+ "  ");
            printOdd(num+2);
         }
    }
    public static void main(String[] args) {
        System.out.println("All odd num from 1- 50: ");
        printOdd(2);
        System.out.println();
    }
}
/*
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day6/24August$ java Program
All odd num from 1- 50:
2  4  6  8  10  12  14  16  18  20  22  24  26  28  30  32  34  36  38  40  42  44  46  48  50  52  54  56  58  60  62  64  66  68  70  72  74  76  78  80  82  84  86  88  90  92  94  96  98  100
*/
