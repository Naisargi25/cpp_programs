// c++ program to swap two numbers by passing value by pointers

#include <iostream>

using namespace std;
void swap(int *,int *);
int main(){
		int a,b;
		cout << "Enter two values : " << endl;
		cin >> a >> b;
		cout << "Before swapping : " << a << "  " << b << endl;
		swap(&a,&b);
		cout << "After swapping : " << a << "  " << b << endl;
		return 0;
}

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
