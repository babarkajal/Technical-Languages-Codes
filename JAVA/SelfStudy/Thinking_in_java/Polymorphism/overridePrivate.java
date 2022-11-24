class parent {
        parent(){
            System.out.println("Parent constrcutor" );
        }
        void fun(int i) {
            System.out.println("Hello from fun(int)");
        }
        private void fun() {

        }
}

class Child {
    Child() {
        System.out.println("Child constrcutor");
    }
    void fun(int i) {
      System.out.println("Hello from child fun(int)");
    }
    public static void main(String args[]){
            Child c = new Parent();
            c.fun(20);
    }
}
