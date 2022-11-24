//WAP to sum values of ana array
import java.util.Scanner;

class Program {

        public static void main(String[] args) {

                Scanner sc=new Scanner(System.in);

                //take size of an array
                System.out.println("Enter size of an array: ");
                int n = sc.nextInt();

                //declare arrray of int values
                int arr[] = new int[n];

                //take elements from user
                System.out.println("Enter interger values");
                for(int i=0; i<n ;i++) {
                        arr[i]= sc.nextInt();
                }

                //print the array
                int sum = 0;
                System.out.println("\nEntered elements are: ");
                for(int i=0; i<n; i++) {
                        System.out.print(arr[i]+"  ");
                        sum += arr[i];
                }
                System.out.println();
                System.out.println("Sum of elements "+sum);
        }
}
