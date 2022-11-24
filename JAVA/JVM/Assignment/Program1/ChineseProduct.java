class ChineseProduct {
    //number of product banned
    static int bannedCount  = 0;
    static int notBannedCount = 0 ;
    //boolean to stor whether that product banned or not
    boolean isBanned = false;


    void displayProductStatus(String name) {
      if(isBanned)
          System.out.println(name + " is banned in India");
      else
      System.out.println(name + " is not banned in India");
    }

    static void showCount() {
      System.out.println(bannedCount + " products are banned in India");
      System.out.println(notBannedCount + " product are still in market");
    }

  }


class India {
        public static void main(String[] args) {
            ChineseProduct softwareProducts = new ChineseProduct();     //object created on heap =100
            ChineseProduct.bannedCount = 59;                             //India has banned 59 apps so change static variable
            ChineseProduct.notBannedCount =1;                           //pubg game is there so count is 1
            softwareProducts.showCount();                               //100.showCount()

            ChineseProduct tikTok = new ChineseProduct();                 //object is created on heap =200
            tikTok.isBanned = true;                                       //200.isBanned = true
            tikTok.displayProductStatus("TikTok");                                //200.displayProductStatus()

            ChineseProduct pubg = new ChineseProduct();
            pubg.isBanned = false;
            pubg.displayProductStatus("Pubg");

        }
}
