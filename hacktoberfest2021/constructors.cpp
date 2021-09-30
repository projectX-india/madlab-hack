#include<iostream>
using namespace std;

/*
Task:
1. implement a class student 
2. implement default constructor
3. implement parameterized constructor
4. implement copy constructor
*/

class student{
	public:
    // Default Constructor
    student(){
        setName("No Name");
    }

    // Parameterized Constructor
	student(string nm) {
		setName(nm);
	}

    // Copy constructor
    student(const student &st){
        name = st.name;
    }

	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
	private:
		string name;
};

int main(){
    student ob1("Abhay");
	student ob2("madlab-hack");
    cout << ob1.getName() << endl;

    student ob3 = ob2;

    cout << ob3.getName() << endl;

    return 0;
}
