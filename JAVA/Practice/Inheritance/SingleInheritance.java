//parent class
class Parent {
        String name = "shivaji";
        float salary = 10000;

        Parent() {
                        System.out.println("In default parent");
        }

        Parent(String name , float salary) {
                System.out.println("In Parameterized parent");
        }

        void display() {
                System.out.println("In Parent display");
                System.out.println("Name "+name + "\tSalary "+salary);
        }
        void fun() {
                System.out.println("In parent fun");
        }

}

//child class
class Child extends Parent {

        int cls=12;

        Child() {
                //super("shivaji",10000);
                name = "kajal";
                salary = 5000;
                System.out.println("In Child constructor");
        }

        void display() {
                System.out.println("In Child display");
                System.out.println("name "+ name);
                System.out.println("salary "+ salary);
                System.out.println("class "+cls);
        }
        void gun() {
                System.out.println("in parent gun");
        }
}


class Main {
        public static void main(String[] args) {
                /*Child c = new Child();
                c.display();
                Parent p= new Parent();
                p.display();
                */

                //generalization: widening of child
                Parent pc = new Child();         //object ahe child cha and parent ch reference
                pc.display();                    //ha method object ch display method call karel
                //because in java methods are binded at run time so the overriden method will be called
                //but in Cpp parents method will be called because reference jyacha asto tyche method call hotat and they are
                //statically binded for making it we have to use virtual functions

                pc.fun();
                /*
                pc.gun();               //if parent reference is pointing to child reference then only overriden or common method will
                                        //be accessible by that reference not individual methods of child

                Child c = new Parent(); //object of parent and reference of child
                                        //Narrowing casting from child to parent
                                        //we cannot do this because child don't have any idea which methods are implemented by parent
                */
                //solution is coversion
                Child c = (Child)new Parent();

        }
}
