class TernaryDemo {
      public static void main(String[] args) {

            int result = true? 10 : 20 ;
            System.out.println("Result "+ result);      //10

            result = false ? 10 : 'a';
            System.out.println("Result "+ result);      //97

            result = false ? 10: 3.4f;                  //error:incompatible type
            System.out.println("Result "+ result);

            int x =10, y =20;
            result = x++ ? x : y;                         //error: first operand should be true/false
            System.out.println("Result "+result);

      }
}
