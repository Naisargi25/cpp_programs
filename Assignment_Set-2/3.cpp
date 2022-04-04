#include <iostream>
#include <string>

using namespace std;

int ans=0;

void swap(char &a,char &b){
 char temp;
 temp=a;
 a=b;
 b=temp;

}
void compare(string inp, int len){
    string temp;
    for(int i=0;i<len;i++)
    {
        //make 2 char sub string 
        temp = inp.substr(i,2);
        
        //check '01' is there or not
        if(temp=="01"){
            ans++;
        }
    }
}

int main()
{
    string str;
    int count = 0;
    cout<<"Enter a string: ";
    cin >> str;
    int len = str.length();
    compare(str,len);
    
    // check if "01" substring in original string
    count+=ans;
    cout << "Original string: " << str << " occurenece of 01: " << ans << endl;
   
    ans=0;
    for(int i=0;i<len-2;i++)
    {
        for(int j=i+2;j<len;j+=2){
            string temp = str;
            swap(temp[i],temp[j]);
            if(temp!=str){
                compare(temp,len);
                cout<<temp;
                cout<<" occurenece of 01: "<<ans<<endl;
                count += ans; 
                ans = 0;
            }
        }
        
       
    }
    
    cout << "Total occurence: " << count << endl;

    return 0;
}



