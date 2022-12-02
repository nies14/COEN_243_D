#include <iostream>

using namespace std;
class Test
{
    private:
        static int cnt;
    public:
        Test(/* args */);
        ~Test();
        void print()
        {
            cout <<"Total Number of objects: " << cnt <<endl;
        }
};

int Test :: cnt = 0;

Test::Test(/* args */)
{
    cnt++;
}

Test::~Test()
{
    cnt--;
}


int main () 
{
    Test ob,ob1;
    ob.print();
    return 0;
}