/*C++ program to demonstrate declaration, initialization, and access to structure types
The member elements of the structure can be accessed using 2 operators
Member access operator(.)
Pointer to member access operator(->)*/
#include<iostream>
#include<string.h>
using namespace std;

struct student{
    int id;
    char name[20];
    float marks,attendence;
}; //no memory allocated as of now

int main(){
    struct student s1 = {12,"Mayank",75.0,50.0};//memory allocatednow
    struct student s2;// memory allocated now
    struct student s3;

//Method 2 of initialization
cout <<"Enter student ID for S2:"<<endl;
cin >> s2.id;

cout <<"\nEnter student Name for S2:"<<endl;
cin >> s2.name;

cout <<"\nEnter Marks for S2:"<<endl;
cin >> s2.marks;

cout <<"\nEnter attendence for S2:"<<endl;
cin >> s2.attendence;

//method 3 of initialization
s3.id=36;
s3.marks=79;
strcpy(s3.name,"Namey ");
s3.attendence=200;

//acessing struture member
cout<<"\n\nDetails of Student 1:\n";

 cout << "Name: " << s1.name << "\nID: "
  << s1.id << "\nMarks: "<< s1.marks << "\nAttendance: " << s1.attendence;

  return 0;
}


