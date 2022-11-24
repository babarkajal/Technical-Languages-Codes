//Jagged array using new

class JaggedDemo {
        public static void main(String[] args) {
                //jagged 2d array using new

                int[][] jarr = new int[3][];

                //initilize every row of an 2D jagged array
                jarr[0] = new int[] {1,2,3};
                jarr[1] = new int[] {4,5};
                jarr[2] = new int[] {6,7,8,9};

                //print the array
                //instead of hardcoded values use length varible
                //it gives number of rows  for 2D array and for 1D array it gives number of columns
                System.out.println("2D jagged Array using new ");
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
