//    float datatype
//    size - 4 bytes

class FloatDemo {
  public static void main(String[] args) {
      //float f = 2.5;        //error
      float f = 2.56f, j = 2.5F;
      System.out.println(f+"  " + j);
      double d = 2.56;
      System.out.println("double "+d);

      //if this f and d values are looks like same but their internal reprensation is different
      if(f==d) {
        System.out.println("same values");
      }
      else{
        System.out.println("different values");
      }
  }
}

//error: imcompatilble type :possiVly loosy conversion from double to float
// in java by default floating values are of type double not float so append 'f' or 'F' at the end of value to
//denote float type value
