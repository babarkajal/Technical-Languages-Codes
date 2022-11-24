//take 2D Jagged array from user using new
import java.util.Scanner;
class JaggedDemo {
        public static void main(String[] args) {
                Scanner sc  = new Scanner(System.in);

                //jagged 2d array using new
                int jarr[][] = new int[3][], col;

                //take input from user
                System.out.println("Enter 2D jagged Array: ");
                for(int i=0; i < jarr.length; i++) {
                        System.out.println("Enter num of values for row "+ i);
                        col = sc.nextInt();

                        jarr[i] = new int[col];

                        for(int j=0;j < jarr[i].length; j++) {
                                jarr[i][j] = sc.nextInt();
                        }
                        System.out.println();
                }

                //print the array
                System.out.println("Entereed 2D jagged Array: ");
                for(int i=0; i < jarr.length; i++) {
                        for(int j=0;j < jarr[i].length; j++) {
                                System.out.print(jarr[i][j]+"  ");
                        }
                        System.out.println();
                }
        }
}
