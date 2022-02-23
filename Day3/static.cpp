//cpp program for static members

#include <iostream>

using namespace std;

class A
{
  int n;
  static int b,c,d; // static member variables
  public:
    void getdata(int a)
    {
      n=a;
      c++;
    }
    void getcount()
    {
      cout << "count = " << c << endl;
    }
    
    static void display() // static member function
    {
      cout << "Value of b is : " << b << endl; // static member function access only sytatic member variable or function not non-static
      cout << "Value of d is : " << d << endl;
    }
};

// static member variables declaration
int A :: c;
int A :: b = 30;
int A :: d = 40;

int main()
{
  A a,b;
  a.getdata(10);
  a.getcount();
  
  b.getdata(20);
  b.getcount();
  
  a.display();
  return 0;
}
