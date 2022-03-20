// cpp program to count the number of words that start with 'e'

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream input;
    int count=0;
    string str;

    input.open("3.txt",ios::in);
 
    if(!input)
    {
        cout << "The file can't open" << endl;
    }

    else
    {
        while(input>>str)
        {
              if(str[0] == 'e')
              {
                count++;
              }
        }
    }
    
    cout << "Total Number of words starting with 'e' is : " << count << endl << endl;
   
    input.close();
    return 0;
}
