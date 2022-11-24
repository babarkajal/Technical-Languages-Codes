class MyThread extends Thread {
	void MyThread() {
                        System.out.println("daemon thread is running");
	}	
        public void run() {
                System.out.println(Thread.currentThread().getPriority());
                if(Thread.currentThread().isDaemon()) {
                        System.out.println("daemon thread is running");
                }
        }

        public static void main(String arg[]) {
                MyThread mt = new MyThread();
                mt.start();
		mt.MyThread();

        }

}
