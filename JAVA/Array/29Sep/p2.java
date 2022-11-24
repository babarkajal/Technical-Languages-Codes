//array class

class Demo {

}

class Program {
        public static void main(String[] args) {
                int[] iarr = new int[5];
                System.out.println("Class of int array: "+ iarr.getClass()); //class [I
                System.out.println("iarr is instanceof Object?: " + (iarr instanceof Object));

                float[] farr = new float[5];
                System.out.println("Class of float array: "+ farr.getClass()); //class [F
                char[] carr = new char[5];
                System.out.println("Class of char array: "+ carr.getClass()); //class [C

                //ipl object
                IPL[] match = new IPL[5];
                System.out.println("Class of IPL array : "+ match.getClass()); //class [LIPL;
                Demo[] d = new Demo[2];
                System.out.println("Class of d " + d.getClass());//class [LDemo;

                //initilizer list ne pn ek object ch crreate hoto
                int arr[] = {10,20,30};
                System.out.println("arr instanceof object?: " + (arr instanceof Object)); //true
        }
}
