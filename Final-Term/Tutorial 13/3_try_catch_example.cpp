#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int a=10, b=INT_MIN, c;
	try
	{
		//if a is divided by b(which has a value 0);
		if(b==0)
			throw(10); 
		if (b == INT_MIN)
			throw("Error Occured");
		else
			c=a/b; 		
			
	}
	catch(char c)     //catch block to handle/catch exception
	{
		cout<<"Caught exception : char type ";
	}
	catch(int i)     //catch block to handle/catch exception
	{
		cout<<"Caught exception : int type ";
	}
	catch(short s)     //catch block to handle/catch exception
	{
		cout<<"Caught exception : short type ";
	}
	catch(...)     //catch block to handle/catch exception
	{
		cout<<"Error Occured" << endl;
	}
	
	return 0;
}