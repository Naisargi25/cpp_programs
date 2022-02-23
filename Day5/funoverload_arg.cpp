//function overloading with number of arguments

#include <iostream>
using namespace std;

int sum(int a)
{
  return a;
}

int sum(int a,int b,int c)
{
  return a+b+c;
}

int sum(int a,int b)
{
  return a+b;
}

int main()
{
   cout << "Sum is (5) " << sum(5) << endl;
   cout << "Sum is (5,5) " << sum(5,5) << endl;
   cout << "Sum is (5,5,5) " << sum(5,5,5) << endl;
   
    return 0;
   
}
