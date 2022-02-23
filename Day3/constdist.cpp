#include <iostream>

using namespace std;

class demo{

	int width,height;

	public:
	        // default constructor
		demo(){
		width=0;
		height=0;
		cout << "Height = " << height << " and Width = " << width << endl;
		}
    
                //parameterized constructor
		demo(int x,int y){
		height=x;
		width=y;
		cout << "Height is : " << height << " and width is : " << width <<endl;
		}
    
                //copy constructor
		demo(demo &d){
		width=d.width;
		height=d.height;
		cout << "Copy constructor called" << endl;
		cout << "Height is " << d.height << " and width is " << d.width << endl;
		}
		 
		//destructor   
		~demo(){
		cout << "Destructor is called" << endl;
		}
		
}; // end of class demo

int main()
{
  
   demo d1(10,20);
   demo();
   demo d2(d1);

   return 0;
}
