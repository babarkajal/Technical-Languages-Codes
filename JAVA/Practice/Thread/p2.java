class MyThread implements Runnable {
        public void run(){
                System.out.println("By Runnable");
        }

}

class Test {
        public static void main(String[] args) {
                MyThread mt = new MyThread();
                Thread t = new Thread(mt);
                t.start();
                System.out.println("main");
                Thread t2 = new Thread(mt);
                System.out.println("main2");
                t2.start();
        }
}
