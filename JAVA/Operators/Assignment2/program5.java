/*
Program 5: Write 2 classes as Pune, Mumbai. Add the following things:
class Pune :
static variable : int covidActiveCases
instance variable : int totalCases
static method : noCorona
instance method : lockdown
noLockdown
class Mumbai :
static variable : int covidActiveCases
instance variable : int totalCases
static method : noCorona
instance method : lockdown
noLockdown
Increment both the variables in non-static method. Call non-static methods twice,
display the output and observe the changes. Draw JVM architecture for the same.
*/


class Pune {
      static int covidActiveCases= 25000;
      int totalCases = 50000;
      static void noCorona() {
        System.out.println("Corona is incresing day by day in Pune !!");
        System.out.println("lockdown extended in pune till 25 July");
        System.out.println("Active case in Pune "+covidActiveCases);
      }

      void lockdown() {
              totalCases++;
        }
}

class Mumbai {
        static int covidActiveCases= 50000;
        int totalCases = 75000;
        static void noCorona() {
            System.out.println("Corona is incresing day by day in Mumbai !!");
            System.out.println("lockdown is not extended");
            System.out.println("Active case in Mumbai "+covidActiveCases);
        }

        void lockdown() {

            totalCases++;
        }


}

class Corona {
    public static void main(String[] args) {
          Pune july = new Pune();
          july.noCorona();
          july.lockdown();
          july.lockdown();



          Mumbai july_1 = new Mumbai();
          july_1.noCorona();
          july_1.lockdown();
          july_1.lockdown();

    }
}
