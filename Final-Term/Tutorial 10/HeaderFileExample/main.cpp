#include "header.h"

int main()
{
    //this will call the empty constructor
    Student student1;

    student1.setName("Tanvir");
    student1.setId("56235372");

    cout << "Student 1 Name: " <<student1.getName() << endl;
    cout << "Student 1 Id: " <<student1.getId() << endl;

    //if we want to change the name after creating the object we need to call the setName function
    student1.setName("Hassan");


    cout << "Student 1 Name after changing: "<< student1.getName() << endl;

    //this will call the paramiterized constructor
    Student student2("1234","Tanvir",1);

    cout << "Student 2 Name: " <<student2.getName() << endl;
    cout << "Student 2 Id: " <<student2.getId() << endl;

    return 0;
}
