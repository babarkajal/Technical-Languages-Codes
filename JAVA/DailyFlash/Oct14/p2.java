//find the num occuring odd num of times in an array

import java.util.Scanner;
class Program {
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

                int count,index=0;
                boolean flag;
                int[] countArray = new int[n];

                for(int i=0; i<n; i++) {

                        //consider the element is not in countArray
                        flag = false;
                        count = 0;

                        //check whether given element is in the countArray or not
                        for(int k=0; k<n; k++) {
                                if(arr[i] ==countArray[k])
                                        flag = true;
                        }

                        //if not then only find the count of that num
                        if(!flag) {

                                for(int j=0;j < n; j++) {
                                        if(arr[i] == arr[j])
                                                count++;
                                        }

                                        if(count%2 != 0)
                                                countArray[index++] = arr[i];
                        }

                }
                System.out.println("Odd occurred element in an array ");
                for(int i=0; i<index; i++) {
                        System.out.print(countArray[i]+" ");
                }
                System.out.println();
        }
}
