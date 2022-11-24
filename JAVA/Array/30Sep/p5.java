//multidimentional array with initlizer list

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][] =  {};      //no error
                //array of size 0 will be created
                arr[0][1] = 10; //run time exception ArrayIndexOutOfboudsException
        }
}
