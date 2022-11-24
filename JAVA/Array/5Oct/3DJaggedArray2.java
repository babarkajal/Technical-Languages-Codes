/*
        3D array using new and initilizer list
*/
class JaggedDemo {
        public static void main(String[] args) {

                //declare an array of plane 2
                int[][][] jarr = new int[2][][];

                //initilize an array with values
                jarr[0] = new int[][] {{1,2,4,5},{6,7},{10}};
                jarr[1] = new int[][] {{20,30,40},{50}};

                //print the given 3D array
                for(int i=0; i < jarr.length; i++)  {           //2
                        System.out.println("Plane "+ i);
                        for (int j=0; j < jarr[i].length ; j++ ) {      //0 contain 3 rows, 1 contain 2

                                for(int k=0; k < jarr[i][j].length; k++) {
                                        System.out.print(jarr[i][j][k]+"  ");
                                }
                                System.out.println();
                        }
                        System.out.println();
                }
        }
}
