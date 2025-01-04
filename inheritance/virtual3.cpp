// Pure Virtual Function
#include <iostream>
using namespace std;

class Shape
{
public:
  virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape
{
public:
  Circle()
  {
    cout << "i am cons of circle";
  }
  void draw()
  {
    cout << " drawing circle";
  }
};

class Square : public Shape
{
public:
  void draw()
  {
    cout << "Drawing a Square\n";
  }
};

int main()
{
  Circle c;

  Shape *shape1 = &c;
  Shape *shape2 = new Square();
  shape1->draw();
  shape2->draw();

  delete shape2;
  return 0;
}
