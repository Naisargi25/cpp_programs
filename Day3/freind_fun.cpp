// cpp program to implement friend function

#include <iostream>

using namespace std;

class B; // forward declaration

class A{
  
	int n1; // private members
    
	public:
        	void setdata(int a){
        	n1 = a;
        	}
  
    		friend int add(A,B);	
    			
}; //end of class A

class B{
  
	int n2; // private members
    
	public:
        	void setdata(int a){
        	n2 = a;
        	}
  
    		friend int add(A,B);	
    			
}; //end of class B

//friend function
int add(A a,B b)
{
  return (a.n1+b.n2);
}


int main()
{
  A ob1;
  B ob2;
  ob1.setdata(10);
  ob2.setdata(30);
  cout << "Sum = " << add(ob1,ob2) << endl;

  return 0;
}
