//cpp code with two classes Time and Date

#include <iostream>
#include<ctime>


using namespace std;

class Date{

    public: 
        int day,month,year;
        
    Date setDate(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        day = ltm->tm_mday;
        month = 1 + ltm->tm_mon;
        year = 1900 + ltm->tm_year;
        
        Date temp;
        temp.day = day;
        temp.month = month;
        temp.year = year;
        
        return temp;
    }
    
    Date getDate(){
        Date temp;
        temp.day = day;
        temp.month = month;
        temp.year = year;
        
        return temp;
    }
    
    Date setDob(int d,int m,int y){
        Date temp;
        temp.day = d;
        temp.month = m;
        temp.year = y;
        
        return temp;
    }
    
    void findAge(Date ad, Date bd){
        year = ad.year - bd.year;
        month = bd.month - ad.month;
        day = bd.day - ad.day;
        
        cout<<"You are "<<year<<" years "<<month<<" month and "<<day<<" days old..! \n";
    }
    
}; // end of class Date

class Time
{
    int hr,min,sec; //private variable
    
  public:
    void setTime()
    {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        
        hr = ltm->tm_hour;
        min = ltm->tm_min;
        sec = ltm->tm_sec;
        cout << "Current time is = "<< hr << ":" << min << ":" << sec << endl;
        
    }
    Time getTime()
    {
        Time tm;
        cout << "Enter hour minutes and second" << endl;
        cin >> tm.hr >> tm.min >> tm.sec;
        cout << "Given time is : " << tm.hr <<":" << tm.min <<":" << tm.sec <<endl;
        return tm;
     
    }
    Time sleepTime(Time t1,Time t2)
    {
        Time diff; 
        if(t2.sec > t1.sec)
        {
           --t1.min;
           t1.sec += 60;
        }
 
       diff.sec = t1.sec - t2.sec;
       if(t2.min > t1.min) 
       {
           --t1.hr;
           t1.min += 60;
       }
 
       diff.min = t1.min-t2.min;
       diff.hr = t1.hr-t2.hr;
       cout << "Difference is = " << diff.hr <<":" << diff.min <<":" << diff.sec << endl;
       return diff;
    }
    
};// end of class Time

int main()
{
    Time t1,t2,t3,t4;
    t1.setTime();
    t3 = t2.getTime();
    cout<<"\n";
    t1.sleepTime(t1,t3);
 
    cout<<"\n";
    int day, month, year;
    Date d1,d2,bd1,d3;
    d2 = d1.setDate();
    d3 = d1.getDate();
    cout<<"Enter Birth-day: " << endl;
    cin>>day;
    cout<<"Enter Birth-Month: " << endl;
    cin>>month;
    cout<<"Enter Birth-Year: " << endl;
    cin>>year;
    bd1 = d1.setDob(day,month,year);
    
    d1.findAge(d2,bd1);
    return 0;
}
