#include <iostream>

//parent
class X {
  public:
    int x =200;
    virtual void display() {
      std::cout <<"X display\n";
    }
};

//child
class Y : public X {
public:
  int x= 20;
  Y(){
    std::cout << "Y constructore\n";
  }
  void display() {
    std::cout <<"Y display\n";
  }
  void fun(int i) {
    std::cout << "In fun(int)\n";
  }
};

int main() {
        X *y = new Y();
        y->display();
        /*std::cout << "y.X = " << y->x << std::endl;
        std::cout << "y2.X = " << y2->x << std::endl;
        std::cout << "Y2 "<< y2 << std::endl;
        free(y);
        std::cout << "Y2 "<< y2 << std::endl;
        std::cout << "after delete y.X = " << y->x << std::endl;
*/

        return 0;
}
