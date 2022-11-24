class Football {

}

class Cricket {
    public static void main(String[] args) {
          Cricket test = new Cricket();     //object is created on heap
          Cricket T20 = new Cricket();

          Football fmatch = new Football();


          System.out.println("instance of Object? "+ (test instanceof Object));
          System.out.println("instance of Object? "+ (fmatch instanceof Object));   //true
          //directly or indirectly every object is instance of Object CLASS

    }
}
