#include<iostream>
using namespace std;

/*
Task:
1. implement a class student 
2. data types - name, rollno, age
3. it should contain a function to print student details
*/

#include<iostream.h>
#include<fstream.h>
#include<conio.h>
class student
{
int rno;
char name[20];
int age;
public:
void get()
{
cout<<“\nEnter data: Roll no Name Marks\n”;
cin>>rno>>name>>age;
}
void disp()
{
cout<<“\nRoll no\tName\tMarks\n”;
cout<<“=============================\n”;
cout<<rno<<“\t”<<name<<“\t”<<age<<endl;
}
};
void main()
{
fstream f;
f.open(“school.dat”,ios::in|ios::out);
student s;
s.get();
f.write((char*)&s,sizeof(s));
while(f.read((char*)&s,sizeof(s)));
s.disp();
getch();
}
