/*Program 18: Write a program to accept some number and print them in reverse order
Input: 420
Output: 024
*/

class Program {
    public static void main(String[] args) {
        int num = 12;
        System.out.println(num+ " is reverse order");
        while(num!= 0) {
            System.out.print(num%10);
            num/=10;
        }
        System.out.println();
    }

}
