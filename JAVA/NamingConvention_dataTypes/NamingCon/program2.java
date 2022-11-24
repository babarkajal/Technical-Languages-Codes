/* naming conventions:-
      Variable and function: write it in camel case. first letter of word should be small and further starting of new letter should be capital
                  e.g studentAge , functionValue
      Class name: As per convention first letter of every word should be capital
                  e.g. String, System, Demo, NamingConventions
*/

//class name
class NamingConventions {
  ///Variable name
  int studentAge = 20;

  //function name
  int getStudentAge() {
    return studentAge;
  }

  public static void main(String[] args) {
        NamingConventions val = new NamingConventions();
          System.out.println("Age= "+ val.getStudentAge());

  }
}
