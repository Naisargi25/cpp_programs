//cpp program to implement inline function

#include <iostream>
using namespace std;

//inline function
inline int cube(int n){
  
return n*n*n;

}

int main()
{
   
   cout << "Cube of the value 3 is " << cube(3) << endl;
   cout << "Cube of the value 3 is << 3*3*3 << endl;
  
   return 0;
   
}
