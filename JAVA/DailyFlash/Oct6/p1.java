//accpet two array from use and store multiplication of eahc elements int third array
import java.util.Scanner;

class Program {
        public static void main(String[] args) {
                //create connection with System.in
                Scanner sc = new Scanner(System.in);

                System.out.println("Enter size of an arrays: ");
                int n = sc.nextInt();

                //declare three arrays
                int[] arr1= new int[n];
                int[] arr2 = new int[n];
                int[] mult = new int[n];

                System.out.println("Enter elements into first array: ");
                for(int i=0; i< n; i++) {
                        arr1[i] = sc.nextInt();
                }

                System.out.println("Enter elements into second array: ");
                for(int i=0; i< n; i++) {
                        arr2[i] = sc.nextInt();
                }

                //perform multiplication operation and store it into third array
                for(int i=0; i< n; i++) {
                        mult[i] = arr1[i] * arr2[i];
                 }

                 System.out.println("\nAfter multiplication third array values are: ");
                 for(int i=0; i< n; i++) {
                         System.out.print(mult[i]+"  ");
                 }
                 System.out.println();

        }

}
