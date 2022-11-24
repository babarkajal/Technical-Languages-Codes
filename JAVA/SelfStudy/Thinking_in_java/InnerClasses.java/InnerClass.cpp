#include<iostream>
class Outer {
  int a =100;
  public:
  class Inner {
      public:
        int i=20;
        void display(){
        //  std::cout <<" a= "<< a << std::endl;
          std::cout  <<"i="<< i <<std::endl;
          std::cout << "display()" << '\n';
        }
      };
};


int main() {
  Outer a;
  a.Inner i;
  std::cout << "Outer created" << '\n';
  //i.display();
  return 0;

}
