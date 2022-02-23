// cpp program to implement default arguments

#include <iostream>
using namespace std;

// three default arguments
int cube(int l=7, int b=2, int h=6){
 
   return l*b*h;
}

// two default arguments
int cubevolume(int l, int w=6, int h=8){

   return l*w*h;
} 

// one default argument
int volume(int l, int b, int h=6){
 
   return l*b*h;
}

/* invalid one => becasue we have to assign default parameters from right to left not in between

int cubic(int l=7, int b, int h=6){

   return l*b*h;
}*/

int main()
{
   cout << "For three default values are assigned" << endl;
   cout << "Volume is : " << cube() << endl; 
   cout << "Volume is : " << cube(4) << endl;
   cout << "Volume is : " << cube(3,4) << endl;
   cout << "Volume is : " << cube(3,4,5) << endl;
   
   cout << "For two default values are assigned" << endl; 
   cout << "Volume is : " << cubevolume(4) << endl;
   cout << "Volume is : " << cubevolume(3,3) << endl;
   cout << "Volume is : " << cubevolume(3,3,3) << endl;
   
   cout << "For one default values are assigned" << endl; 
  // cout << "Volume is : " << volume(4) << endl; = > this will not work, it shows very few arguments, because we have only one default argument
   cout << "Volume is : " << volume(3,4) << endl;
   cout << "Volume is : " << volume(3,4,5) << endl;
   
   //cout << "Volume of the cube is :" << cubic(3,5) << endl; => invalid
   return 0;
   
}
