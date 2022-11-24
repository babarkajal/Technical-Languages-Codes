class Army {
        static int divisions = 0;
        float stateCount = 0;                         //every state contributes num of people in army so it is object wise different count
        static float activePersonnel = 1.4f;       //there are 1.4m active Personnel in our army

        void stateArmy(String state){

            System.out.println(state + " has " + stateCount + " % in total strength");
        }

        static void info() {
          System.out.println("Indian army established in 1 April 1895. Headquarters are in Ministry of Defence,South block, New Delhi");
          System.out.println("In Indian Army there are "+ divisions + " divisions currently wroking");
          System.out.println(activePersonnel + " million  active Personnel are contributed for Indian army");
        }
}

class AirForce {
    static int activePersonnel = 139576;
    int aircraft = 0;

    static void info() {
       System.out.println("Indian air force established in 8 October 1932. Headquarters are in New Delhi");
       System.out.println(activePersonnel + " million  active Personnel are contributed for Indian army");
     }

     void aircraft (){
            System.out.println("There are "+aircraft + " in Indian army");
     }
}

class Navy {
         static int activePersonnel = 67252;
         int ships = 295;

        static void info() {

          System.out.println("Indian navy established in 5 september 1612.");
          System.out.println("Moto is 'May the  lord of water be auspicious unto us");
          System.out.println(activePersonnel + " million  active Personnel are contributed for Indian army");
        }

        void  shipCount() {
              System.out.println("In our navy there are "+ships + " are working");
        }
}



class India {
        public static void main(String[] args) {
            System.out.println("----------Army------------------");
            Army.divisions = 37;                           //In india there are 37 divisions
            Army.info();                                   //call info method

            Army panjab = new Army();
            panjab.stateCount = 7.78f;                      //panjab contributed 7.78% of the total
            panjab.stateArmy("Panjab");

            System.out.println("\n----------Air force------------------");
            AirForce air = new AirForce();
            air.aircraft = 1748;
            air.info();
            air.aircraft();

            System.out.println("\n----------Indian Navy------------------");
            Navy navy = new Navy();
            navy.info();
            navy.shipCount();
          }
}
