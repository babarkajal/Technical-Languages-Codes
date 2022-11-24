class Customer {
        private String name;
        private int id;
        static int count=0;
        Customer() {
                this("k",123);
                System.out.println("Default ");
                this.name ="kajal";
                this.id = 14;
        }
        Customer(String name, int id) {

                System.out.println("Parameterized");
                //this();
                this.name = name;
                this.id = id;
        }

        static void main() {
                System.out.println("name"+name);
        }
        //method
        void display() {

                System.out.println("Name " + name +  "  Id = "+ id);

        }
}


class Main {
        public static void main(String[] args) {
                //create instance
                Customer c1 = new Customer();
                //Customer c2 = new Customer("XYZ",34);
                c1.display();
                //c2.display();
        }
}
