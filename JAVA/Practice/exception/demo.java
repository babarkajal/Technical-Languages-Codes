//try catch throw

class Demo {
        public static void main(String[] args) {
                int num  = 10, value = 5;
                try {
                        System.out.println("Starting ");
                        System.out.println("num/value"+(num/value));                    //exception
                        System.out.println("ending ");
                        System.out.println("command line arguement"+args[0]);
                        
                }catch(ArithmeticException c) {
                        System.out.println("num divide by 0");
                        c.printStackTrace();
                }
                catch(ArrayIndexOutOfBoundsException c) {
                        System.out.println("array accessed out of Bounds ");
                        System.out.println(c);
                }catch(Exception c ) {
                        c.printStackTrace();
                }
                finally {
                        System.out.println("In finally ");
                }
        }
}
