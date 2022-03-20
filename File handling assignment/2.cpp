// cpp program to count the number of words that has 'a' in them

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream input;
    int count=0;
    string str;

    input.open("2.txt",ios::in); // open a file in read mode
 
    if(!input)
    {
        cout << "The file can't open" << endl;
    }

    else
    {
        while(input>>str)
        {
           int len = str.length();

           for(int i=0; i<len; i++)
           {
              if(str[i] == 'a')
              {
                count++;
                break;
              }
           }
        }
    }
    
    cout << "Total Number of words having 'a' is : " << count << endl << endl;
   
    input.close();
    return 0;
}
