#include <iostream>

using namespace std;

class GradeBook
{
    private:
        string courseName;
        string taName;
        //int numberOfHands;
    public:
        GradeBook()
        {
            courseName="No Name";
            taName = "";
        }

        GradeBook(string name, string nameofta)
        {
            courseName = name;
            taName = nameofta;
        }

        /*Human(string personName)
        {
            name = personName;
        }*/

        string getCourseName()
        {
            return courseName;
        }

        void setCourseName(string name)
        {
            courseName = name;
        }

        string getTAName()
        {
            return taName;
        }

        void setTAName(string name)
        {
            taName = name;
        }

        void displayMessage()
        {
            cout <<"The "<<courseName<<" is presented by" << taName<< endl; 
        }
};


int main()
{
    //GradeBook ob;
    //ob.courseName = "jkhbjhgf";
    GradeBook ob("COEN 243","Tanvir");
    ob.displayMessage();
    return 0;
}