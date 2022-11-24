//WAp to reverse an array of interger values
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
                System.out.println("\nEntered elements are: ");
                for(int i=0; i<n; i++)
                        System.out.print(arr[i]+"  ");
                System.out.println();

                //reverse the array
                int temp;
                for(int i=0, j=n-1; i<j; i++,j--) {
                        //exchange values to reverse the array
                        temp = arr[i];
                        arr[i] =arr[j];
                        arr[j] = temp;

                }

                //print the array
                System.out.println("\nAfter reverse operation, elements are: ");
                for(int i=0; i<n; i++)
                        System.out.print(arr[i]+"  ");
                System.out.println();

        }
}
