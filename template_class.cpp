#include<iostream>

using namespace std;

template<class T1,class T2,class T3,class T4>

class myClass
{
	private:

		T1 age;
		T2 name;
		T3 salary;
		T4 address;

	public:

	myClass(T1 a,T2 n,T3 s,T4 x)
	{
		age = a;
		name = n;
		salary = s;
		address = x;	
	}

	void display()
	{
		cout << this->age << endl;
		cout << this->name << endl;
		cout << this->salary << endl;
		cout << this->address << endl;
	}

};

int main()
{
		myClass<int,string,float,string> Employee(21,"Shivam Chopra",200000.50,"New Delhi");

		Employee.display();
		return 0;

}
