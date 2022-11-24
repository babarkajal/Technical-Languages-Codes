//find missing num form sorted array

class Program {
        public static void main(String[] args) {

                //declare an array
                int[] arr = {1,3,4,5,6,7,9};

                System.out.println("Given array: ");
                for(int i=0;  i< arr.length; i++) {
                        System.out.print(arr[i]+" ");
                }
                System.out.println();

                //find missing element
                System.out.println("missing elements are: ");
                for(int i=0; i < arr.length-1; i++) {
                        if(arr[i] != arr[i+1]-1)
                                System.out.print(arr[i]+1 +"  ");
                }
                System.out.println();
        }
}
