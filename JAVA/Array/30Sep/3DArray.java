//3d array

class Program {
        public static void main(String[] args) {

                //declare an Array
                //initilize an array using initlizer list
                int arr[][][] = {{},{},{}};                     //this is not an array it contains 3 empty rows
                System.out.println(arr.length); //3
                //System.out.println(arr[0][0]);                  //exception

                int[][][] arr2 = {1,2,3,4,5,6,7,8,9,10};
                /* error: 3DArray.java:12: error: incompatible types: int cannot be converted to int[][]
                int[][][] arr2 = {1,2,3,4,5,6,7,8,9,10};

                compiler la except asat ki list madhe 2d array asavet and first bhetato int and to int la convert karych try karto int[][] 
		mhnun error yete ki cannot convert to int[][]                
		*/

                int[][][] arr2 = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
                /* error: 3DArray.java:12: error: incompatible types: int cannot be converted to int[]
                int[][][] arr2 = {1,2,3,4,5,6,7,8,9,10};
                */

                /* let us underestand the structure of 3D array
		 * 3d array mhnje ky asat ?
		 * 3D array madhe 2D arrays che plane astat mhnje combination of 2D arrays jas 2D array ha combination of 1D array asto ts
		 * mhnje expected structure is 
		 *
		 * arr = { { {} ,{} },  { {} , {} } }
		 */

	
        }
}
