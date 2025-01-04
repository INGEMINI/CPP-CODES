// Virtual Function with Base and Derived Class
#include <iostream>
using namespace std;

class Base
{
public:
  virtual void greet()
  {
    cout << "Hello from Base\n";
  }
};

class Derived : public Base
{
public:
  void greet()
  {
    cout << "Hello from Derived\n";
  }
};

int main()
{
  Base base;
  Derived derived;

  Base *ptr1 = &base;
  Base *ptr2 = &derived;

  ptr1->greet(); // Calls Base's greet
  ptr2->greet(); // Calls Derived's greet
  return 0;
}
