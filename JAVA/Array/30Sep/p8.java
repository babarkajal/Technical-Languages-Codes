//multidimentional array

import java.util.Scanner;
class Demo {

}
class MDArray {
        public static void main(String[] args) {
                int arr[][] = new int[3][3];
                System.out.println("Classs of 2d array: "+ arr.getClass());     //class [[I

                Demo[][] d = new Demo[5][3];
                System.out.println("Class of 2d array of demo class "+ d.getClass()); //class [[LDemo;
        }
}
