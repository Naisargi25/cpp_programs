// cpp program to show member function of one class can be a friend function for another class

#include <iostream>

using namespace std;

class B; //forward declaration of class

class A
{
        int a;
        
	public:
	         // parameterized constructor
	         A(int x){
	         a=x;
	         }  
	
	         void show(B obj); //function declaration
	     	
}; //end of class A

class B
{
	int b;
        
	public:
	         // parameterized constructor
	         B(int x){
	         b=x;
	         }  
	
	         friend void A :: show(B obj);

}; //end of class B


//function definition
void A :: show(B obj)
{
   cout << "a is : " << a << endl;
   cout << "b is : " << obj.b << endl;
}

int main()
{
  A obj1(10);
  B obj2(20);
  obj1.show(obj2);
  return 0;
}  
