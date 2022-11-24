class Cricket {
    public static void main(String[] args) {
          Cricket test = new Cricket();     //object is created on heap
          Cricket oneDay = new Cricket();
          Cricket T20 = new Cricket();

          boolean ans = test instanceof Cricket;   //true : test is an instance of Cricket
                                                  // converted to int  type
          System.out.println("Ans = "+ ans);

          Cricket thirty5 =null ;                           //this is an reference of the Cricket
          System.out.println(thirty5 instanceof Cricket);

          System.out.println("instance of Object "+ (thirty5 instanceof Object));   //false
          //directly or indirectly every object is instance of Object CLASS


    }
}
