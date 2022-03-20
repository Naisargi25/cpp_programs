// cpp program to count the number of words that end with 's'

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream input;
    int count=0;
    string str;

    input.open("4.txt",ios::in);
 
    if(!input)
    {
        cout << "The file can't open" << endl;
    }

    else
    {
        while(input>>str)
        {
           int len = str.length();

              if(str[len-1] == 's')
              {
                count++;
              }
        }
    }
    
    cout << "Total Number of words ending with 's' is : " << count << endl << endl;
   
    input.close();
    return 0;
}
