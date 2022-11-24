/* Program3:
    write a program to check that user is eligile for voting or not using ternary operator
  */


class User {
    int age;

    //set the age of user
    void setAge(int i) {
      age = i;
    }

    //method to check whether that user is eligible or not
     void isEligible() {
      if(age >= 18 ? true : false) {
        System.out.println("User is eligible for voting age is "+age);
      }
      else {
        System.out.println("User is not eligible for voting age is "+age);
      }
    }
}

class Voting {
    public static void main(String[] args) {
       User user1 = new User();       //create a one user
       user1.setAge(20);              //yes this user is eligible
       user1.isEligible();

       User user2 = new User();       //create a second user
       user2.setAge(15);              //yes this user is eligible
       user2.isEligible();


    }
  }
