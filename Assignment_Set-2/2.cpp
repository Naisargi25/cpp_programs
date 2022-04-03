#include <iostream>
#include <string>
using namespace std;

class CharInput // base class
{
    protected:
        string str = "";

    public:
    void add(char c)
    {
        str += c;
    }

    string getvalue()
    {
        return NULL;
    }

}; // CharInput class ended

class numInput : public CharInput // child class
{
    public:
    void add(char c)
    {
        if (isdigit(c))
        {
            CharInput::add(c); // call overriden function
        }
    }

    string getvalue()
    {
        return str;
    }

}; // numInput class ended

int main()
{
    numInput n; // object of child class

    n.add('1');
    n.add('d');
    n.add('0');

    cout << "Output is: " << n.getvalue() << endl;

    return 0;
}
