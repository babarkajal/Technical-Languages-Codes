class Cricket {
    public static void main(String[] args) {
          Cricket test = new Cricket();     //object is created on heap
          Cricket oneDay = new Cricket();
          Cricket T20 = new Cricket();

          int ans = test instanceof Cricket;      // error: imcompatible types boolean cannot  be
                                                  // converted to int  type
          

    }
}
