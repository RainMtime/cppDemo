#include<iostream>
using namespace std;

class printData{
    public:
       //函数重载
       void print(int i){
           cout << "整数为： " << i << endl;
       }

       void print(double f){
           cout << "浮点数为： "<< f << endl;
       }
};


int main(){

printData pd;
//函数重载
pd.print(5);
pd.print(3.14);

}

//操作符重载
class Box
{
   public:
 
      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }
 
      void setBreadth( double bre )
      {
          breadth = bre;
      }
 
      void setHeight( double hei )
      {
          height = hei;
      }
      // 重载 + 运算符，用于把两个 Box 对象相加
      Box operator+(const Box& b){
          Box box;
          box.length = this->length + b.length;
          box.breadth = this->breadth + b.breadth;
          box.height = this->height + b.height;
          return box;
      }
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};