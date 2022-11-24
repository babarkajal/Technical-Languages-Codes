class parent {
  parent(){
    System.out.println("parent con");
  }
  public int j = 10;
    void display(){

      System.out.println("J="+j);
    }
}

class child extends parent {
    public int j = 20;

    void display(){
      System.out.println("child.J="+j);
      super.display();
    }

    int getJ() {
        return j;
    }
    public static void main(String []args) {
      child c = new child();
      c.display();
      System.out.println("c.j = "+c.j);
      int i= c.getJ();
    }
}
