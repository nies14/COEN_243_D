// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
    virtual const char* what() const throw()
    {
        return "My exception happened";
    }
} myex;


int main () 
{
    int a=10, b=0, c;
	try
	{
		//if a is divided by b(which has a value 0);
		if(b==0)
			throw myex;
			
	}
    catch (exception& e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}