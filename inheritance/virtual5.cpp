//. Virtual Destructor in Polymorphism
#include <iostream>
using namespace std;

class Base
{
public:
  Base()
  {
    cout << "Base constructor\n";
  }
  virtual ~Base()
  { // Virtual destructor
    cout << "Base destructor\n";
  }
};

class Derived : public Base
{
public:
  Derived()
  {
    cout << "Derived constructor\n";
  }
  ~Derived()
  {
    cout << "Derived destructor\n";
  }
};

int main()
{
  Base *obj = new Derived();
  delete obj; // Ensures both destructors are called
  return 0;
}
