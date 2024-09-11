#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
#include <sstream>
using namespace std;

//3306 is the default port number

const char* HOST = "localhost";
const char* USER = "root";
const char* PWD = " ";
const char* DB = "mydatabase";

class University{
    private:

      string Name, SubjectName;
      int Id;
      float cgpa;

    public:
      
      University() : Id(0),Name(""),SubjectName(""),CGPA(0.0){

      }

      //getter and setter functions for variables

      void setId(int id){
         Id = id;
      }

      int getId(){
        return Id;
      }
      
      void setName(string name){
         Name = name;
      }

      string getName(){
         return name;
      }

      void setSubjectName(string subjectName){
         SubjectName = subjectName;
      }

      string getSubjectName(){
         return subjectName;
      }

      void setGrade(float cgpa){
         CGPA = cgpa;
      }

      float getGrade(){
         return CGPA;
      }
};

insertStudent(MYSQL* connection, University u){
   int id;
   string name,subjectName;
   float cgpa;

   cout<<"Enter ID : ";
   cin>>id;
   u.setId(id);

   cout<<"Enter Name : ";
   cin>>name;
   u.setId(name);


}

int main(){

   University u;

    MYSQL* connection;
    connection = mysql_init(NULL);

    if(!mysql_real_connect(connection,HOST,USER,PWD,DB,3306,NULL,0)){
        cout<<"Encountered error : "<<mysql_error(connection)<<endl;
    } 

    else{
        cout<<"You are logged in the system"<<endl;
    }
//allow display for some time 3s
    Sleep(3000);

    bool exit = false;
    while(!exit){
        system("cls");   //built in method that hides the previous output and shows the current output
        int value;
        cout<<"Welcome to University Management Portal of Ramaiah Institute of Technology !!"<<endl;
        cout<<endl;
        cout<<"0. Exit the Portal"<<endl;
        cout<<"1. Insert Student Data"<<endl;
        cout<<"2. Display Student Data"<<endl;
        cout<<"3. Search Student Data"<<endl;
        cout<<"4. Update Student Data"<<endl;
        cout<<"5. Delete Student Data"<<endl;
        cout<<"Enter your choice [0-5]: ";
        cin>>value;
        cout<<endl;

        if(value == 1){
          
        }
    }

    return 0;
}