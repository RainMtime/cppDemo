#include <iostream>
#include <limits>
#define N 100 //定义常量
using namespace std;
typedef int inttype;
void func();
void staticFunc();
static int count = 10;
int main()
{
    // cout 输出语句
    cout << "Hello ,world" << endl;
    //测试基本数据结构所占空间大小
    cout << "bool: \t\t"
         << "所占的字节数： " << sizeof(int) << endl;
    cout << "\t 最大值" << (numeric_limits<int>::max)();

    // typedef 改变相关类型昵称
    inttype a = 3;

    //枚举类型(默认情况下第一个名称值为0，第二个值为1)
    enum color
    {
        red,
        green,
        blue
    } c;
    c = blue; // 此时blue = 2;

    //定义变量
    int i, j;

    //定义常量(const ,#define)
    const int LENGTH = 0;
    // auto是c11标准 ，自动推断类型，修饰函数的时候，自动推断返回值
    // auto ii = 12;
    // static 修饰局部变量的时候，可以保持函数调用的时候，保持起值。eg：staticFunc
    func();
    staticFunc();
    staticFunc();

    //用extern 来声明在其他文件中的函数和变量。

    //mutable  存储类，不太晓得啥意思（holding）

    //thread_local 存储类类似于java的Thread_local()

    

    return 0;
}

void func()
{
    cout << "func" << endl;
}

void staticFunc()
{
    static int i = 5; //相当于仅执行一次。
    i++;
    cout << "i:" << i << endl; 
}

