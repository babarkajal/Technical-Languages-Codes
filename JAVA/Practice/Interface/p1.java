//interface contains abstract methods
interface Village {
        void display();
        void setName(String n);

}
interface Village1 {
        void display();
        void setName(String n);
}


class Demo implements Village,Village1 {
        String name;
        public  void setName(String name) {
                this.name = name;
        }

        public void display() {
                System.out.println("Name "+ name);
        }
        void fun() {

        }
        public static void main(String[] args) {
                Village d = new Demo();
        //        d.display();
                d.setName("kudje");
                d.display();
                d.Hii.gun();
        }
}
