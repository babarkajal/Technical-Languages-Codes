//parent class
class Parent {
        String name;
        float salary;
        Parent() {
                        System.out.println("In default parent");
        }

        Parent(String name , float salary) {
                this.name = name; this.salary = salary;
                System.out.println("In Parameterized parent");
        }

        void display() {
                System.out.println("In Parent display");
                System.out.println("Name "+name + "\tSalary "+salary);
        }

}
class Child extends Parent {
        int cls=12;
        Child() {
                super("shivaji",10000);
                System.out.println("In Child constructor");
        }
        void display() {
                super.display();
                System.out.println("In Child display");
                System.out.println("name "+ name);
                System.out.println("salary "+ salary);
                System.out.println("class "+cls);
        }
}
class Main {
        public static void main(String[] args) {
                Child c = new Child();
                c.display();
        }
}
