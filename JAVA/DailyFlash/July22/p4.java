/*Program5:
  copy type following code and write explanation
*/

class Human  {
    public static void main(String[] args) {
        /* here we created three references
          remember these are not objects means an instance these are just references
          objects are created by using new
          */
        Human lion = null;
        Human tiger = null;
        Human puma = null;

        //here monkey is a object means an instance of Human and it is created in heap
        Human monkey = new  Human();

        boolean isLionHuman = lion instanceof Human;    //false
        System.out.println("Are lion and Human of same species--> "+isLionHuman);
        boolean isTigerHuman = tiger instanceof Human;  //false
        System.out.println("Are Tiger and Human of same species--> "+isTigerHuman);
        boolean isPumaHuman = puma instanceof Human;    //false
        System.out.println("Are puma and Human of same species--> "+isPumaHuman);
        boolean isMonkeyHuman = monkey instanceof Human;  //true because this is an instance of Human
        System.out.println("Are monkey and Human of same species--> "+isMonkeyHuman);

    }
}
