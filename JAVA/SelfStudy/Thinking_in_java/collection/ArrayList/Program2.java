import java.util.ArrayList;
class VariousTypes {
    public static void main(String[] args) {
      ArrayList<Integer> arr = new ArrayList<Integer>();
      arr.add(20);      //add int
      arr.add('A');   //add char
      arr.add(3,4f);  //add float
      arr.add(3.4);     //add dou
      arr.add((int)3.56);   //add tapycasted value
      System.out.println(arr);
    }
}
