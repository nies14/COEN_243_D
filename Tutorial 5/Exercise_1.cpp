#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;
    for(int side1 = 1; side1<=500; side1++)
    {
        for(int side2 = side1; side2<=500; side2++)
        {
            for(int hypo = side2; hypo <= 500; hypo++)
            {
                if(side1*side1 + side2* side2 == hypo* hypo)
                {
                    cout <<side1 <<" "<<side2<<" "<<hypo <<endl;
                    cnt++;
                }
            }
        }
    }
    cout <<"Total number of triples from 1 to 500 is: "<<cnt <<endl;

    return 0;
}