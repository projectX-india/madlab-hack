#include<iostream>
#include<conio.h>
using namespace std;

/*
Task:
1. implement a class student 
2. data types - name, rollno, age
3. it should contain a function to print student details
*/
class student
{
  int rollno,age;
  char name[20];
  public:
  void get_data()
  {
    cout<<"Enter roll no:";
    cin>>rollno;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter Name:";
    cin>>name;
  }
  void display()
  {
    cout<<"Details are:"<<endl;
    cout<<"Roll no:"<<rollno<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Name:"<<name<<endl;
  }
};
int main()
{
  student s;
  s.get_data();
  s.display();
  return 0;
}

    
