/*
        3D jagged array using initilizer list
*/

class JaggedDemo {
        public static void main(String[] args) {
                //create array of 2 planes and jagged 2D arrays
                /* first plane contain 2d jagged array of 3 rows
                        and second contain 4 rows
                */
                int[][][] jarr = {

                        //first plane
                        {
                         {1,2,3,4},{5,6},{7,8}
                        },
                        //second plane
                        {
                                {10,20,30},{40},{50,60},{70,80,90,100}
                        }

                };

                //print the given 3D array
                for(int i=0; i < jarr.length; i++)  {           //2
                        System.out.println("Plane "+ i);
                        for (int j=0; j < jarr[i].length ; j++ ) {      //0-3, 1-4

                                for(int k=0; k < jarr[i][j].length; k++) {
                                        System.out.print(jarr[i][j][k]+"  ");
                                }
                                System.out.println();
                        }
                        System.out.println();
                }
        }
}
