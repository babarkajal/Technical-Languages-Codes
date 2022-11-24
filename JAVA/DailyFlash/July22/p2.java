/*program2:
      write 2 classes on instagram &facebook .write one static method .one instance method in instagram
      static method should check the object belongs to the class instagram or not using ternary operator
      call theat method on the class name and pass object of the instagram class.Write main method in the
      facebook class and create an instagram object (Draw jvm arch on paper)
*/

class Instagram {
      int posts;
      int followers;
      String id;

      //instance method
      void profile() {
        System.out.println("-------------Instagram Profile information -------------");
        System.out.println("Instagram id: "+ id);
        System.out.println("Postd: "+posts);
        System.out.println("followers "+ followers);
      }

      static void isInstance(Instagram temp) {
        //if passed object is the instance of Instagram then it will return true otherwise false
          if(temp instanceof Instagram) {
              System.out.println("Yes ! This  User belongs to Instagram");
          }
          else{
            System.out.println("Oops ! This  User does not belongs to Instagram");
            }
      }
}


class Facebook {
      int posts;
      int friends;
      String id;

      //instance method
      void profile() {
        System.out.println("-------------Facebook Profile information -------------");
        System.out.println("Facebook id: "+ id);
        System.out.println("Postd: "+posts);
        System.out.println("friends "+ friends);
      }
      //static method
      //here i used the Object class reference because I want to check for two objects one is facebook and
      //second is Instagram
       static void isInstance(Object temp) {

          //if passed object is the instance of Facebook then it will return true otherwise false
          if(temp instanceof Facebook) {
              System.out.println("Yes ! This  User belongs to Facebook");
          }
          else{
            System.out.println( "Oops ! This User is not available on facebook");
            }
      }
}


//main method
class SocialMedia {
        public static void main(String[] args) {
              Instagram kajal = new Instagram();
              //set instance object's values
              kajal.id="_kajal_babar_";
              kajal.posts= 19;
              kajal.followers = 199;
              kajal.profile();        //print its profile
              Instagram.isInstance(kajal);

              Facebook user = new Facebook();
              user.id = "User";
              user.friends = 200;
              user.posts = 10;
              user.profile();       //print its profile
              Facebook.isInstance(user);        //Yes
              Facebook.isInstance(kajal);       //no because this object is not instance of Facebook class

        }
}
