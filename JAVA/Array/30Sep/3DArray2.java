//3d array
/* output
Array plane 0
1  2  3
4  5  6

Array plane 1
7  8  9
10  11  12
*/

class Program {
        public static void main(String[] args) {
                //create 3d array

                int[][][] marr = {
                        {
                                {1,2,3}, {4,5,6}
                        },
                        {
                                {7,8,9},{10,11,12}
                        }
                };

                //print the array
                for(int i=0; i < marr.length; i++) {
                        System.out.println("Array plane "+ i);
                        for(int j=0; j< marr[i].length; j++) {
                                for(int k=0; k< marr[i][j].length; k++)
                                        System.out.print(marr[i][j][k] + "  ");
                                System.out.println();
                        }
                        System.out.println();
                }
        }
}
