#include <iostream>

using namespace std;

class Human
{
    private:
        string name;
        //int numberOfHands;
    public:
        Human()
        {
            name="No Name";
        }

        /*Human(string personName)
        {
            name = personName;
        }*/

        string getName()
        {
            return name;
        }

        void setName(string personName)
        {
            name = personName;
        }
};


int main()
{
    Human ob, ob1;
    ob.setName("Tanvir");

    cout << ob.getName() << endl;

    cout << ob1.getName() << endl;
    return 0;
}