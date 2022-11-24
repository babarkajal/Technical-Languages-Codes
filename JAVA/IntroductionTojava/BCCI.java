class BCCI {
  void niyam() {
    System.out.println("BCCI Niayam ");
  }
}

class IPL {
  static void niyam() {
    System.out.println("IPL rules");
  }
  static BCCI c = new BCCI();
  public static void main(String[] args) {
    BCCI a = new BCCI();
    a.niyam();
    IPL.niyam();
  }
}
