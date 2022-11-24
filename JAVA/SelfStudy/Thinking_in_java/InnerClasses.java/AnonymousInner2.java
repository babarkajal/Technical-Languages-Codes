class Outer {
      Inner instance(){
        //anonymous inner class
        return new Inner() {
              private int j =20;
              void display(){
                System.out.println("j = "+j);
              }
        };
      }

      public static void main(String[] args) {
        Outer O = new Outer();
        Inner i = O.instance();
        System.out.println(i);
      }

}
