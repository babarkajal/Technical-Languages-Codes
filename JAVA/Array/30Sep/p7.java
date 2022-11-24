//multidimentional array with initlizer list

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][] =  {{10},{20}};
                System.out.println(0[arr][0]);
                /* this works in C because internally array are represented like this
                 arr[0][0] --> *(*(arr+0)+0) --> *(*(0+arr)+0) --> 0[arr][0];
                 but in java array are objects and 0[arr] this means we are using subscript to the integer
                 */
        }
}
