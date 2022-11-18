#include <iostream>

using namespace std;

class Student
{
    private:
        string name, id;
        int gender;
    public:
        Student();
        Student(string studentId, string studentName, int studentGender);
        void setName(string studentName);
        string getName();
        void setId(string studentid);
        string getId();
};

