/*
Enter row count:
6
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
*  *  *  *  *  *
*/
import java.io.*;
class Program {
    public static void main(String[] args) throws IOException{
        int row;
        System.out.println("Enter row count: ");
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        row = Integer.parseInt(input.readLine());
        for(int outer=0; outer< row;outer++) {
            for (int inner=0; inner<=outer; inner++) {
                System.out.print("*  ");
            }
            System.out.println();
        }

        System.out.println("\nUsing one for loop: ");
        int stop = 1,end=1;
        for(int i=1; ; i++) {
              System.out.print("*  ");

              if(i == stop) {
                System.out.println();
                i= 0;     //set i to the -1 and then increment it will become 0 again
                stop++;
              }
              if(stop==row+1)
                  break;        //when it will  reach to the row+1th line then break;
        }

    }
}
