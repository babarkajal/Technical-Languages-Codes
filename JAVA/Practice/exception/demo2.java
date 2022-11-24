class Demo {
        public static void main(String[] args) {
                try {
                        //throw is usully used to send explicit the
                        throw new ArithmeticException("Kahitri wrong zaalay");
                }catch(Exception c) {
                        System.out.println("exception "+c);
                }
                finally {
                        System.out.println("In finally");
                }
                System.out.println(new Demo().hashCode());
        }
}
