//Jagged array
/* Array which contains different num of columns or value for  different rows
*/
class JaggedDemo {
        public static void main(String[] args) {
                //jagged 2d array using initilizer list
                int[][] jarr = {
                                {1,2,3} , {4,5}, {6,7,8,9}
                };
                /* jarr[0] = {1,2,3}    //1 length
                   jarr[1] = {4,5}      //2 length
                   jarr[2] = {6,7,8,9}  //3 length

                */

                //print the array

                System.out.println("2D jagged Array using initilizer");
                for(int i=0; i<3; i++) {
                        for(int j=0;j <3; j++) {
                                System.out.print(jarr[i][j]+"  ");
                        }
                System.out.println();
                }

                /* output is 1 2 3
                             4 5 ArrayIndeXOutOfBoundsException: 2
                             because we are accessing the array element jarr[1][2] which is not present
                */
        }
}
