//cpp code to check when the copy constructor is called

#include <iostream>
using namespace std;

class A
{
	private:
        	int i=10;
    
	public:
	        // default constructor
		A(){
		cout << "Constructor is called" << endl;
		}
		
	        // parameterized constructor
		A(A &obj){
		cout << "Copy constructor is called" << endl;
		}
		
		// passing object as an argument
		void add(A &obj){
		cout << "Add() called" << endl;
		}
		
		// return an object
		A add_ret(){
		A temp;
		cout << "Add_ret() called" << endl;
		return temp;
		}
		
		// destructor
		~A(){
		cout << "Destructor is called " << endl;
		}
		
}; // end of class A

int main()
{
  A obj1,obj2;
  //A obj2=obj1;
  obj1.add(obj1);
  //obj2 = obj1.add_ret();
  return 0; 
}
