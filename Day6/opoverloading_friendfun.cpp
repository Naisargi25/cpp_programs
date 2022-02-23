// cpp program to implement operator overloading with friend function

#include <iostream>

using namespace std;

class A
{
	int n1,n2;
    
	public:
		void setdata(int a,int b);
		
		// display function
		void display(){
		cout << "The value of real part: " << n1 << " and imaginary part is: " << n2 << endl;
		}
 
    		friend A operator +(A obj1,A obj2);   
    		friend A operator -(A obj1,A obj2);	
    					
}; // end of class A

void A :: setdata(int a,int b){
   
    n1=a;
    n2=b;
}

//friend function

A operator +(A obj1,A obj2){

    A temp;
    temp.n1 = obj1.n1 + obj2.n1;
    temp.n2 = obj1.n2 + obj2.n2;
    return temp;
}

//overloading the '-' operator
A operator - (A obj1,A obj2){

      A temp;
      temp.n1 = obj1.n1 - obj2.n1;
      temp.n2 = obj1.n2 - obj2.n2;
      return temp;   
}


int main()
{
    A ob1,ob2,ob3;
    ob1.setdata(10,20);
    ob2.setdata(20,30);
    ob3 = ob1 + ob2;
    ob3.display();
    ob3 = ob1-ob2;
    ob3.display();
    return 0;
}
