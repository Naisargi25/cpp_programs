//cpp program to pass object as an argument and return an object

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
   
   int add();
   int sub(Calculator c1, Calculator c2) // passing object as an argument
   {
      add();
      return c1.input1-c2.input1;
   }
   
  Calculator mul(Calculator cl1, Calculator cl2) // passing object as an argument and returning an object
   {
      Calculator cl3;
      cl3.input1 = cl1.input1 * cl2.input1;
      cl3.input2 = cl1.input2 * cl2.input2;
      return cl3; 
   }
  
   /*int add()
   {
     return input1+input2;
   }*/
};

int Calculator :: add()
{
  return input1+input2;
}

int main()
{
   Calculator obj1,obj2,obj3;
   
   obj1.setInput(20,10);
   obj2.setInput(5,5);
   obj3=obj1.mul(obj1,obj2);
   cout << "The inputs : " << obj1.input1 <<"  " << obj1.input2 << endl;
   cout << "The sum of input is : " << obj1.add() << endl;
   cout << "Answer is : " << obj1.sub(obj1,obj2) << endl;
   cout << "Answer is : " << obj3.input1 << "  " << obj3.input2 << endl;
   
   
   return 0;
}
