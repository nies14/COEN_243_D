#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
    void chekSameHeight(Shape *ob)
    {
      if(this -> height == ob->height){
         cout << "Height is same"<<endl;
      }
      else
      {
         cout << "Height is not same"<<endl;
      }
    }
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
    void test()
        {

        }
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Shape *ob  = new Shape();
   Shape *ob1  = new Shape();

   ob->setHeight(10);
   ob ->setWidth(10);
   ob1 ->setHeight(20);
   ob1->setWidth(30);

   ob->chekSameHeight(ob1);
   return 0;
}