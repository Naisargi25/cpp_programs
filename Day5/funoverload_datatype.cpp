//function overloading with data type

#include <iostream>
using namespace std;

int sum(int a,int b)
{
        return a+b;
}

int sum(double a,double b)
{
        return a+b;
}
      
int sum(char a,char b)
{
       return a+b;
}

int main()
{
      cout << "Sum is (5,4) : " << sum(5,4) << endl;
      cout << "Sum is (5.6,5.7) : " << sum(5.6,5.7) << endl;
      cout << "Sum is (a,b) : " << sum('a','b') << endl;
      
      return 0;
}
