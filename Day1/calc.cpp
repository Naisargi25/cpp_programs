#include <iostream>

using namespace std;

class Calculator
{
   public :
   
   int input1,input2;
   
   void setInput(int a,int b)
   {
     input1=a;
     input2=b;
   }
   
   void setIn(int a)
   {
     input1=a;
   }
   
   int add()
   {
     return input1+input2;
   }
   
   int sub()
   {
     return input1-input2;
   }
   
   int mul()
   {
     return input1*input2;
   }
    
   int div()
   {
     return input1/input2;
   }
   
   int square()
   {
     return input1*input1;
   }
   
   int fact()
   {
      int fact=1;
      for(int i=1;i<=input1;i++)
      {
        fact=fact*i;
      }
      return fact;
   }
  
};

int main()
{
   Calculator obj1;
   int choice,x,y;
  
  while(choice!=7)
  {
   cout << "***********Calculator*********" << endl;
   cout << "1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Square \n6.Factorial \n7.Quit" <<endl;
   cout << "\nEnter your choice " <<endl;
   cin >> choice;
 
   switch(choice)
   {
      case 1:
        cout << "\nEnter two numbers : ";
        cin >> x >> y;
        obj1.setInput(x,y);
        cout << "Addition of two numbers is : " << obj1.add() << endl;
        break;
      
      case 2:
        cout << "\nEnter two numbers : ";
        cin >> x >> y;
        obj1.setInput(x,y);
        cout << "Subtraction of two numbers is : " << obj1.sub() << endl;
        break;
        
      case 3:
        cout << "\nEnter two numbers : ";
        cin >> x >> y;
        obj1.setInput(x,y);
        cout << "Multiplication of two numbers is : " << obj1.mul() << endl;
        break;
        
      case 4:
        cout << "\nEnter two numbers : ";
        cin >> x >> y;
        obj1.setInput(x,y);
        cout << "Division of two numbers is : " << obj1.div() << endl;
        break;
        
      case 5:
        cout << "\nEnter a number : ";
        cin >> x;
        obj1.setIn(x);
        cout << "Square of a number is : " << obj1.square() << endl;
        break;
       
      case 6:
         cout << "Enter a number : ";
         cin >> x;
         obj1.setIn(x);
         cout << "Factorial of a number is : " << obj1.fact() << endl;
         break; 
       
      case 7:
        cout << "Thank You..!!" << endl;
              
   }
 
  }
  
  return 0;
  
 }
