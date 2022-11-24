enum Note {middle_c, middle_h, middle_i};

abstract class Instrument {
  abstract void play();
  abstract void adjust();
  String what() {
    return "Instrument";
  }
}

class Wind extends Instrument {

    void play() {
          System.out.println("Wind.play() " );
    }
    public String what() { return "Wind"; }
    void adjust() {}
}

class Percussion extends Instrument{
  void play() {
      System.out.println("Percussion.play() " );
  }
 String what() { return "Percussion"; }
 void adjust() {}
}

class Test {
  static void tune(Instrument i) {
    i.play();
  }
  static void tuneAll(Instrument[] e) {
    for(Instrument i:e)
        tune(i);
  }
  public static void main(String[] args) {
    // Upcasting during addition to the array:
    Instrument[] orchestra = {
      new Wind(),
      new Percussion()
    };
    tuneAll(orchestra);
  }
}
