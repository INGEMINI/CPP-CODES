#include <iostream>
using namespace std;

class Base
{
public:
  virtual void display() = 0;
  // Pure virtual function
  void showMessage()
  {
    cout << "Message from Base class\n";
  }
};
void Base::display()
{
  cout << "i am display";
}

class Derived : public Base
{
public:
  void display()
  {
    cout << "Derived class implementation\n";
  }
};

int main()
{
  Derived d;
  d.display();     // Calls Derived's implementation
  d.showMessage(); // Calls Base's function
  return 0;
}
