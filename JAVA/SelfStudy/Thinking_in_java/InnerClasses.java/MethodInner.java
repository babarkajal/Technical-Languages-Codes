interface Account {
   void withDraw(int money);
   void credit(int money);
}

class AccountHolder {

    public Account access() {

        //local inner class
        private class AccessAccount implements Account{
          public void withDraw(int money){
            System.out.println(money +" Rs withDrawn");

          }
          public void credit(int money){
            System.out.println(money+" rupees credited in acount ");
          }
        }
        return  new AccessAccount();
    }
}

class Test {
  public static void main(String[] args) {
  AccountHolder ac= new AccountHolder();
  //we got instance of AccessAccount class through access method
  //direct way
  ac.access().withDraw(500);
  //create reference of interface account
  Account aNew = ac.access();

  ///call methods
  aNew.withDraw(500);
  aNew.credit(2000);
 }
}
