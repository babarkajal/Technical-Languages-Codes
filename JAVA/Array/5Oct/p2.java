//Jagged array using initilizer list
/* Array which contains different num of columns or value for  different rows
*/
class JaggedDemo {
        public static void main(String[] args) {
                //jagged 2d array using initilizer list
                int[][] jarr = {
                                {1,2,3} , {4,5}, {6,7,8,9}
                };
                /*
                   this is same as above
                   jarr[0] = {1,2,3}    //1 length
                   jarr[1] = {4,5}      //2 length
                   jarr[2] = {6,7,8,9}  //3 length

                */

                //print the array
                //instead of hardcoded values use length varible
                //it gives number of rows  for 2D array and for 1D array it gives number of columns
                System.out.println("2D jagged Array using initilizer ");
                for(int i=0; i < jarr.length; i++) {
                        for(int j=0;j < jarr[i].length; j++) {
                                System.out.print(jarr[i][j]+"  ");
                        }
                System.out.println();
                }

                /* output is 1 2 3
                             4 5
                             6 7 8 9
                */
        }
}
