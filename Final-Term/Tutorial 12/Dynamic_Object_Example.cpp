#include<iostream>
using namespace std;
  
class Test
{
    // Data members
    private:
        int a, b;
    public:

        //Constructor
        Test()
        {
            cout << "Constructor is called" << 
                     endl;
            a = 1;
            b = 2;
        };
    
        // Destructor 
        ~Test()
        {
            cout << "Destructor is called" << 
                     endl;
        }
    
        // Function to print values
        // of data members
        void show()
        {
            cout << "a = " << 
                     a << endl;
            cout << "b = " << 
                     b << endl;
        }
};
  
// Driver code
int main()
{
    // pointer to object
    Test *ptr;         
    
    // dynamic object creation
    ptr = new Test;  
    
    // Accessing member through 
    // pointer to object
    ptr->show();     
    
    // Destroying object dynamically
    delete ptr;     
    return 0;
}