/*
Program 1: Write a Java Program with a class of name dominos with two instance
variable 'price' and 'quantity', declare one static variable named 'total' and static
method bill() . Create two objects of class named as pizza and fires assign some value
for instance variable of class and calculate the total bill & print the total cost.
*/
class Dominos {
      float price = 0;                      //price for that food
      int quantity = 0;                     //quantity of food
      static float total = 0;               //to store total

      static void bill() {
        System.out.println("Total bill is "+ total);
      }

      //entry point function:main()
      public static void main(String[] args) {
            Dominos pizza = new Dominos();                      //pizza object will be created on heap area
            pizza.price = 299;
            pizza.quantity = 2;

            Dominos fires = new Dominos();                      //pizza object will be created on heap area
            fires.price = 100;
            fires.quantity = 3;

            Dominos.total = pizza.price* pizza.quantity + fires.price*fires.quantity;    //make bill
            Dominos.bill();                                     //print total bill by calling static method
      }

}
