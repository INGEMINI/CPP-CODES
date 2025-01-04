#include <iostream>
using namespace std;

class Base
{
public:
  virtual void display()
  {
    cout << "Base class display function\n";
  }
};

class Derived : public Base
{
public:
  void display()
  {
    cout << "Derived class display function\n";
  }
};

int main()
{
  Derived d;
  Base *obj = &d;
  obj->display(); // Calls Derived's display

  return 0;
}
