class myException extends Exception {
        myException(String val) {
                super(val);
        }
}

class Demo {
        public static void main(String[] args) {
                try {
                        throw new myException("Oyy makad");
                        //throw new myException();
                        //System.out.println("hii");
                }catch(myException | ArrayIndexOutOfBoundsException e ) {
                        System.out.println("My exception"+e);
                }
                catch(Exception e) {
                        System.out.println("Exception");
                }
        }

}
