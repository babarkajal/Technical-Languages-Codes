//WAP to find and replace elements from an array
import java.util.Scanner;

class Program {
        public static void main(String[] args) {
                Scanner sc=new Scanner(System.in);
                
                //take size of an array
                System.out.println("Enter size of an array: ");
                int n = sc.nextInt();

                //declare arrray of float values
                float arr[] = new float[n];

                //take elements from user
                System.out.println("Enter floating values");
                for(int i=0; i<n ;i++) {
                        arr[i]= sc.nextFloat();
                }

                //print the array
                System.out.println("Entered elements are: ");
                for(int i=0; i<n; i++)
                        System.out.print(arr[i]+"  ");
                System.out.println();

                //take num to find
                System.out.println("\nEnter elements to find: ");
                float find = sc.nextFloat();


                int pos = -1;                   //pos initilized to -1 for not present condition
                //first find the element
                for(int i=0; i<n; i++) {
                        if(arr[i] == find)
                                pos = i;                //copy the position of element
                }

                //if element is present then go for replacement otherwise print not found
                if(pos != -1)  {
                        //enter num to replace
                        System.out.println("Enter element to replace: ");
                        float replace = sc.nextFloat();
                        arr[pos] = replace;
                        System.out.println("\nAfter replacement elements are: ");
                        for(int i=0; i<n; i++)
                                System.out.print(arr[i]+"  ");
                        System.out.println();

                }
                else {
                        System.out.println("\n Entered element not present in the list");
                }

        }
}
