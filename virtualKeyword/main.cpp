#include <memory>
#include <iostream>
using namespace std;

class First {
  public:
  // XXX Every time that you have a class with vitual members,
  // that should had a virtual destructor
  virtual ~First() = default;

  // virtual function
  virtual void polimorphic() {
    cout << "first: polimorphic call" << endl;
  }

  // common function
  void overwrite() {
    cout << "first: overwrite call" << endl;
  }
};

class Second : public First {
  public:
  virtual void polimorphic() {
    cout << "second: polimorphic call" << endl;
  }
  void overwrite() {
    cout << "second: overwrite call" << endl;
  }
};

int main() {
  First * obj = new Second();

  // this function is virtual so is called the derivated 
  // at right of =
  // class Second memberfunction definition
  obj->polimorphic();

  // this function isn't virtual so is called the instance type
  // at right left of =
  // class First memberfunction definition
  obj->overwrite();

  // XXX Delete instance of object
  delete obj;
}
