class Glyph {
  void draw() {
      System.out.println("Glyph.draw");
  }
  Glyph (){
    System.out.println(" Draw ");
    draw();
    System.out.println("after draw");
  }
}

class RoundGlyph extends Glyph {
  
}
