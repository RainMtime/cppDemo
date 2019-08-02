#include<iostream>
using namespace std;

class Box{
       double privatePer;
    public:
       double lenght;
       double width;
       double height;
       void setXXX(double xx);
       Box(); //  构造函数
       Box(const Box& obj); //拷贝构造函数
       ~Box(); //析构函数
       friend void printBoxx(Box box);
    

    private:
          double xxx;
          int *ptr;
};

//类的继承
class Shape{
    public:
       void setWidth(int w){
            width = w;
       }

       void setHeight(int h){
           height =h;
       }

    protected:
       int width;
       int height;   
};

//c++中允许多继承。
class SubBox: public Box,public Shape{
       
};


//构造函数
Box::Box(){
cout << "Object is created!Box";
}
//析构函数
Box::~Box(){
    cout << "Object is released!";
}
//拷贝构造函数
Box::Box(const Box& obj){
     cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    *ptr = *obj.ptr; // 拷贝值
}

//友元函数
void printBoxx(Box box){
    cout << "友元函数可以访问私有的属性" << box.privatePer;
}

void Box::setXXX(double xx){
    xxx = xx;
}

//还有一种骚操作，使用初始化列表初始化对象：
// Box::Box(double hei):height(double hei){
// }

//拷贝构造函数 



int main(){
Box box1;
Box box2;
double volume = 0.0;


box1.height =5.0;
box1.width = 4.0;
box1.lenght = 3.0;

box2.height = 10.0;
box2.width = 9.0;
box2.lenght = 12.0;

 volume = box1.height * box1.width * box2.lenght;
 cout << "Box1的体积：" << volume << endl;
return 0;
}