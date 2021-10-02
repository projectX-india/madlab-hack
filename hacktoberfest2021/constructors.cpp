#include<iostream>
using namespace std;

/*
Task:
1. implement a class student 
2. implement default constructor
3. implement parameterized constructor
4. implement copy constructor
*/

class student
{
	int rollno,marks;
	public:
	student()
	{
		cout<<"Default Constructor"<<endl;
	}
	student(int r, int m)
	{
		rollno = r;
		marks = m;
	}
	student(&s1)
	{
		rollno = s1.rollno;
		marks = s1.marks;
	}
	
	void display()
	{
		cout<<"Roll no:"<<rollno<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};

int main(){
    student s1;
    student s2(20,98);
	student s3(s2);
	s1.display();
	s2.display();
	s3.display();
	

    return 0;
}


