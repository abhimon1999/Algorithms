//This Program will help you to slove ambiguity resolution in classes in c++

#include<iostream>
using namespace std;

class Base1_class
{
public:
  void hello (void)
  {
    cout << "Hello There, here we initialized hello function from base1 class"
      << endl;
  }

};

class Base2_class
{
public:
  void hello (void)
  {
    cout << "Namashkar , here we initialized hello function from base2 class"
      << endl;
  }
};

class Derived_class:public Base1_class, public Base2_class
{
public:
  void hello (void)
  {
    Base2_class::hello ();
    // both base class have same function here comes the ambiguity to resolve this we can use ambiguty resolution operator
  }
};



int main ()
{
  Derived_class b;
  b.hello ();
  return 0;
}
