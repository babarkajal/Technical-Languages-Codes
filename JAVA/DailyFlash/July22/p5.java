/* write one real time example in which instance operato is used dra jvm*/


class FlowerPlants {
        String name;

        void setFlower(String temp) {
              name = temp;
        }


}

class FruitPlants {
     String name;

     void setFruit(String temp) {
           name = temp;
     }
}


class Plants {
  public static void main(String[] args) {
      //create object of flowers
      FlowerPlants rose=  new FlowerPlants();
      rose.setFlower("Rose");

      FruitPlants apple = new FruitPlants();
      apple.setFruit("Name ");

      boolean isInstance;

      //check whether rose is instance of flower or Fruit
      isInstance = rose instanceof FlowerPlants;
      System.out.println("Is rose belongs to flower:  "+isInstance);

      //here it will give error that FlowerPlants cannot e converted to FruitPlants
      //isInstance = rose instanceof FruitPlants;
      //System.out.println("Is rose belongs to fruit:  "+isInstance);

      //here it will give error that FruitPlants cannot e converted to FlowerPlants
      //check whether apple is instance of flower or Fruit
      //isInstance = apple instanceof FlowerPlants;
      //System.out.println("Is Apple belongs to flower:  "+isInstance);

      isInstance = apple instanceof FruitPlants;
      System.out.println("Is Apple belongs to fruit:  "+isInstance);
    }
}
