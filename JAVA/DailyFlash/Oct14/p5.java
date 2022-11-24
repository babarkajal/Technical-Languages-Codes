/*find whether the given array is monotonic or not

*/

import java.util.Scanner;
class Program {
        static boolean isMonotonic(int[] arr) {

                return false;
        }

        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);

                System.out.println("Enter size of an array: ");
                int n = sc.nextInt();

                //declare an array
                int[] arr = new int[n];

                System.out.println("Enter elements in an array: ");
                for(int i=0; i<n; i++) {
                        arr[i] = sc.nextInt();
                }

                if(isMonotonic())
                        System.out.println("Entered array is monotonic");
                else
                        System.out.println("Entered array is not monotonic");
        }
}
