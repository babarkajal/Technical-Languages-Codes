class Cricket {

}
class InstanceDemo {
  public static void main(String[] args) {
        Cricket t20=null;
        Cricket test = new Cricket();
        System.out.println("Instance of Object class? "+ t20 instanceof Object);  //true
        System.out.println("Instcane "+ t20);
	//here t20 is not an instance still it is giving true why?
        //-- t20 first will converted to the string and string is instance of Object
        
        //System.out.println("Instance of Crickect? "+ test instanceof Cricket);
        //it gives error because here we haven't given a bracket for the expression so it will try to
        //convert test to string and then it is used with instanceof operator

    }
}
