//abstract methods is method without body
abstract class Shape{
        int h = 10;
        int w = 30;
        //constructor
        Shape() {
                System.out.println("Shape() con");
        }
        void display() {
                System.out.println("Height " + h + " weight " +w);
        }

        //abstract  method
        abstract float calculate();
}

class Circle extends Shape{
        int r = 4;
        final float PI = 3.14f;

        //to ooverride return should be same
        float calculate() {
                return 2*PI * r;
        }
}

class Main {
        public static void main(String[] args) {
                Shape s = new Circle();
                System.out.println(s.calculate());
                s.display();
        }
}
