//cpp program to count the number of time the word 'the' present in the file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream input;
    int count=0;
    string str;

    input.open("count.txt",ios::in); // open a file in read mode
  
    if(!input)
    {
        cout << "The file can't open" << endl;
    }

    else
    {
        while(input>>str)
        {
            if(str == "the")
            {
             count++;
            }
        }
    }
    
    cout << "Total count of the word 'the' in file is : " << count << endl << endl;
   
    input.close();
    return 0;
}
