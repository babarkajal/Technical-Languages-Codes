/*Program 4: Write a java Program to check if the Bitwise operator ~(compliment) works with
operands with data type int, long, float, double and char.
*/
class Operators {
    public static void main(String[] args) {
            int i=10;
            char j = 'A';     //65
            long k = 45l;
            float f = 2.5f;
            double d = 4.5;

            System.out.println("~int "+ ~i);  //  -(i+1)= -11
            System.out.println("~long "+~k);  // -(k+1) = -46
            System.out.println("~char "+ ~j); // -(65+1) = 66
            /*System.out.println("~float "+ ~f);
            System.out.println("~double "+ ~d);*/
            //error: unary operator ~ only works on integer values not on float bcoz its internal representation is different than the integer
    }
}
