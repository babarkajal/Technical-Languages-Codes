/*
Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99
*/
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
        printOdd(1);
        System.out.println();
    }
}

/*
All odd num from 1- 50:
1  3  5  7  9  11  13  15  17  19  21  23  25  27  29  31  33  35  37  39  41  43  45  47  49  51  53  55  57  59  61  63  65  67  69  71  73  75  77  79  81  83  85  87  89  91  93  95  97  99

*/
