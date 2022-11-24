class Cricket {

      public String toString() {                    //here we are overriding the Object'class methos toString()
         return this;          //this return the name of the class
      }

     public static void main(String[] args) {
            Cricket test = new Cricket();
            System.out.println(test.toString());      //Cricket
    }
}
