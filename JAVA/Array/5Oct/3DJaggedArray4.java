/*
        3D array using new and initilizer list
*/
class JaggedDemo {
        public static void main(String[] args) {

                //declare an array of plane 2
                int[][][] jarr = new int[2][][];

                //initilize an array with values
                jarr[0] = new int[2][];                 //2
                jarr[1] = new int[3][];                 //3
                jarr[0][0] = new int[]{};               //0
                jarr[0][1] = new int[]{10};             //1

                jarr[1][0] = new int[] {20};            //1
                jarr[1][1] = new int[] {1,2,3};         //3
                jarr[1][2] = new int[] {};              //0


                System.out.println("Plane size"+ jarr.length );
                //print the given 3D array
                for(int i=0; i < jarr.length; i++)  {
                        System.out.println("2D array size " + jarr[i].length);
                        for (int j=0; j < jarr[i].length ; j++ ) {
                                System.out.println("1D array size "+jarr[i][j].length);
                        }
                        System.out.println();
                }
        }
}//..

/*
Plane size2
2D array size 2
1D array size 0
1D array size 1

2D array size 3
1D array size 1
1D array size 3
1D array size 0
*/
