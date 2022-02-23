//cpp program to implement operator overloading

#include <iostream>
using namespace std;

class Complex{

	int real,img;
	
	public:
		//default constructor
		Complex(){
		real = 0;
		img = 0;
		}
		
		//paremeterized constructor
		Complex(int a,int b){
		real = a;
		img = b;
		}
	
		//display function
		void display(){
		cout << "The value of real part: " << real << " and imaginary part is: " << img << endl;
		}
		
		//overloading the '+' operator
		 Complex operator + (Complex obj){
                 Complex temp;
                 temp.real = real + obj.real + 10;
                 temp.img = img + obj.img + 10;
                 return temp;   
                }
                
                //overloading the '-' operator
		 Complex operator - (Complex obj){
                 Complex temp;
                 temp.real = real - obj.real;
                 temp.img = img - obj.img;
                 return temp;   
                }
                
                //overloading the '*' operator
		 Complex operator * (Complex obj){
                 Complex temp;
                 temp.real = real * obj.real;
                 temp.img = img * obj.img;
                 return temp;   
                }
                
                //overloading the '/' operator
		 Complex operator / (Complex obj){
                 Complex temp;
                 temp.real = real / obj.real;
                 temp.img = img / obj.img;
                 return temp;   
                }
                
                bool operator == (Complex a){ 
                if(real == a.real  && img == a.img)
                {
                    return true;
                }
                    return false;
                }
                
                bool operator != (Complex a){ 
                if(real != a.real  || img != a.img)
                {
                    return true;
                }
                    return false;
                }
                
                //overloading the '++' operator
		 Complex operator ++ (){ // this work for pre-increment ++value
                 Complex temp;
                 temp.real = ++real;
                 temp.img = ++img;
                 return temp;   
                }
                
                Complex operator ++ (int){ // this work for post-increment value++, we use int as an argument to differentiate which called when
                 Complex temp;
                 temp.real = real++;
                 temp.img = img++;
                 return temp;   
                }
                
                Complex operator -- (){ // this work for pre-decrement --value
                Complex temp;
                temp.real = --real;
                 temp.img = --img;
                return temp;   
                }
                
                Complex operator -- (int){ // this work for post-decrement value--, we use int as an argument to differentiate which called when
                Complex temp;
                temp.real = real++;
                temp.img = img++;
                return temp;   
                }
                
                bool operator > (Complex a){ 
                if(real > a.real  && img > a.img)
                {
                    return true;
                }
                    return false;
                }			
}; //end of Complex class

int main(){
  
        Complex c1(9,5),c2(2,4),c4(2,5),c5(2,5);
        Complex c3;
        c1.display();
        c2.display();
        c3.display();
        cout << "Main part starts here" << endl;
        
        cout << "1.Addition" << endl;
        c3 = c1.operator +(c2);
        c3.display();
        cout << endl;
        cout << "2.Subtraction" << endl;
        c3 = c1.operator -(c2);
        c3.display();
        cout << endl;
        cout << "3.Multiplication" << endl;
        c3 = c1.operator *(c2);
        c3.display();
        cout << endl;
        cout << "4.Division" << endl;
        c3 = c1.operator /(c2);
        c3.display();
        cout << endl;
        cout << "5.Equal" << endl;
        if(c4 == c5) 
        {
           cout << "Both the objects are same" << endl;
        }
        else
        {
           cout << "Both the objects are not same" << endl;
        }
        cout << endl;
        cout << "6.Not equal" << endl;
        if(c1 != c2) 
        {
           cout << "Both the objects are not same" << endl;
        }
        else
        {
           cout << "Both the objects are same" << endl;
        }
        cout << endl;
        cout << "7.pre-increment" << endl;
        c3 = ++c1;
        c3.display();
        cout << endl;
        cout << "8.post-iincrement" << endl;
        c3 = c1++;
        c3.display();
        cout << endl;
        cout << "9.pre-decrement" << endl;
        c3 = --c2;
        c3.display();
        cout << endl;
        cout << "10.post-decrement" << endl;
        c3 = c2--;
        c3.display();
        cout << endl;
        cout << "11.Greter than" << endl;
        if(c1 > c2) 
        {
           cout << "c1 object is greater than c2 object" << endl;
        }
        else
        {
           cout << "c2 object is greater than c1 object" << endl;
        }
        cout << endl;
       
        return 0;
}
