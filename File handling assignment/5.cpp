#include<iostream>
#include<fstream>
using namespace std;

class student
{
   public:
   	int ID;
   	char name[25];
   	char branch[20];
        char loc[40];

   // get student details
   void getdata()
   { 
      cout << "\nEnter Student ID: ";
      cin >> ID;
      cout <<"Enter Name of the student: ";
      cin >> name;
      cout << "Enter branch name: ";
      cin >> branch;
      cout << "Enter location: ";
      cin >> loc;
   }

   // Add details of student into 'student.dat' file
   void Addrecord()
   {
      fstream f;
      student s;
      f.open("student.dat",ios::app|ios::binary);
      s.getdata();
      f.write((char*)&s,sizeof(s));
      f.close();
   }

   // Display student details
   void display()
   {
      fstream f;
      student st;

      int st_id,flag=0;
      cout << "\nEnter student ID: ";
      cin >> st_id;
      f.open("student.dat",ios::in | ios::binary);
      
      if(!f)
      {
         cout << "The file can't open" << endl;
      }

      else
      {
           while(f.read((char *)&st, sizeof(st)))
           {
               if(st.ID == st_id)
               {
                  cout << "Student ID: " << st.ID << "\nName: " << st.name << "\nBranch: " << st.branch << "\nLocation: " << st.loc << endl;
                  flag = 1;
               }     
           }

           try
           {
               if(flag==0)
                   throw st_id;
           }
           
           catch(int x)
           {
               cout << "\nStudent not found with student ID " << st_id << endl;
           }
         
      }

      f.close();
   }
   
}; //end of the class

int main()
{
    int ch;
    student st;

    while(ch!=3)
    {
        cout << "-------------------------------------------------------------------" ;
        cout << "\n1. Add student details" << endl;
        cout << "2. Display details of entered student ID" << endl;
        cout << "3. Exit" << endl; 
        cout << "-------------------------------------------------------------------" ;

        cout << "\nEnter your choice: ";
        cin >> ch;

        switch(ch)
        {
             case 1:
             	  st.Addrecord();
                  break;
            
             case 2:
                  st.display();
                  break;   
    
             case 3:
                  cout << "Thank you!!" << endl;
                  break;

             default:
                  cout << "Please enter valid choice" << endl;
        }
    }
    return 0;
}
