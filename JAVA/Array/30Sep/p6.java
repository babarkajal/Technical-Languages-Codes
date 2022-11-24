//multidimentional array with initlizer list

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][] =  {{},{},{}};      //no error
                //array of size 0 will be created
                int arr2[][] = {};
                System.out.println("Array length " +arr.length);                //3 rows
                System.out.println("Array length arr2 "+arr2.length );  //0 rows
        }
}
