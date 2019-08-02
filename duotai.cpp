#include<iostream>
using namespace std;

class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      //不加virtual的话，会导致main里的输出都是"Parent class area"！
     virtual int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
      //纯虚函数
      virtual int pureArea() = 0;
};

class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }

      int pureArea(){
          return 1;
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
      int pureArea(){
          return 2;
      }
};
int main(){
   Shape *shape;
   
   Rectangle rec(10,7);
   Triangle tri(10,5);

   shape = &rec;
   shape->area();

   shape = &tri;
   shape->area();
}