class Kutumb {
    //instance varible
    int laptop =1;
    int catbery = 1;

    //static variable
    static int TV =1;
    void myData() {
        System.out.println("laptop= "+laptop);
        System.out.println("catbery= "+catbery);
        System.out.println("TV= "+TV);
    }
    public static void main(String[] args) {
      Kutumb kajal = new Kutumb();
      kajal.myData();
      kajal.laptop = 0;             //laptop fodla pn hi doghankde ek copy ahe tyamule tyach copy limted change hoto
      kajal.TV = 0;                 //Tv fodli pn he static mhnje common ahe so ekane change kela tr saglikde reflect hoto
      Kutumb krushant = new Kutumb();
      krushant.myData();
    }
}
