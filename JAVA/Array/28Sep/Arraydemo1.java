//Array in java

class ArrayDemo {
        public static void main(String[] args) {
                //array declaration using initilizer list
                int jarr1[] = {10,20,30,40,50};

                //array declaration using new
                int[] jarr2 = new int[5];
                jarr2[0] =10;
                jarr2[1] = 20;
                jarr2[2] = 30;
                jarr2[3] = 40;
                jarr2[4] = 50;

                System.out.println("array1: ");
                for(int i=0; i<jarr1.length; i++)
                        System.out.print(jarr1[i]+"\t");
                System.out.println();

                System.out.println("array2: ");
                for(int i=0; i<jarr2.length; i++)
                        System.out.print(jarr2[i]+"\t");
                System.out.println();
        }
}
