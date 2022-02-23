#include <iostream>
using namespace std;

class Measure
{
   public :
   
   int length, height, width;
   
   void setInput(int a,int b,int c)
   {
     length = a;
     height = b;
     width = c;
   }
   
   int area()
   {
     return length*width;
   }
   
   int volume()
   {
     return length*width*height;
   }
   
};

int main()
{
   Measure obj1,obj2;
   obj1.setInput(10,5,3);
   obj2.setInput(20,10,6);
   cout << "First object : " << endl << "Area : " << obj1.area() << " and Volume is : " << obj1.volume() << endl;
   cout << "Second object : " << endl << "Area : " << obj2.area() << " and Volume is : " << obj2.volume() << endl;
   return 0;
}
