//find length of 3D array without using length method

class Program {
        public static void main(String[] args) {
                //declare 3D array
                int[][][] arr= {
                        {
                                {1,2,3},{4,5,6}
                        },
                        {
                                {7,8,9},{10,11,12}
                        }
                };
                int count = 0;
                for(int i=0; i < arr.length; i++) {
                        for(int j=0; j<arr[i].length; j++)
                                for(int k=0; k<arr[i][j].length; k++)
                                        count++;
                }
                System.out.println("length of the given array: "+ count);
        }
}
