//function overloading with order of arguments

#include <iostream>
using namespace std;

int sum(int a,float b)
      {
        return a+b;
      }

int sum(float a,int b)
      {
        return a+b;
      }
      
float mul(float a,int b,int c)
     {
        return a*b*c;
     }
     
float mul(int a,int b,float c)
     {
        return a*b*c;
     }
     
int main()
{
   cout << "Sum is (3,5.5) : " << sum(3,5.5) << endl;
   cout << "Sum is (4.5,5) : " << sum(4.5,5) << endl;
   cout << "Multiplication is (5.6,3,4) : " << mul(5.6,3,4) << endl;
   cout << "Multiplication is (4,3,5.3) : " << mul(4,3,5.3) << endl;
   return 0;
}
