// A CPP program that uses override keyword so
// that any difference in function signature is
// caught during compilation
#include <iostream>
using namespace std;

class Base {
public:
	// user wants to override this in
	// the derived class
	virtual void func() { cout << "I am in base" << endl; }
};

class derived : public Base {
public:
	// did a silly mistake by putting
	// an argument "int a"
	//it will throw an error because function definition doesn't match with parent class
	//to solve remove parameter a from below function
	void func(int a) override
	{
		cout << "I am in derived class" << endl;
	}
};

int main()
{
	Base b;
	derived d;
	cout << "Compiled successfully" << endl;
	return 0;
}
