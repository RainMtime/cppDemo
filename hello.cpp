#include <iostream>
#include <limits>
#include <cmath>    //里面包含大量数学运算的api
#include <cstring> //里面包含大量操作字符串的api
#include <ctime>   //里面包含大量time相关的api
#define N 100 //定义常量
using namespace std;
typedef int inttype;
void func();
void staticFunc();
void forFunc();
void stringFunc();
void yinyongUsing();
void funcTest(int a,int b=34);
void pointerUsing();
void timeUsing();
void formatTime();
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

    funcTest(100);

    //c++ 中的数组
    double balance[] = {1000.0,4.5,6};

    pointerUsing();
    //ctime 相关使用
    timeUsing();
    formatTime();
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

void forFunc(){
    int count = 10;
    while(count <0){
        cout<< "count:" << count << endl;
        count--;
    }
}
//c++支持默认的参数值。（参数需在后面） int b =34;
//c11 标准支持 lambda方式函数（需注意）
//cmath方式。
void funcTest(int a,int b){
    cout << "sin(34)"<< sin(b) <<endl;
}

void stringFunc(){
 string str1 = "Hello";
 string str2 = "World";
 string str3 = str1 + str2;
 cout << "str3:" << str3 << endl;
}

void pointerUsing(){
  int var = 20;
  int *ip;
  ip = &var; //将变量var的地址，存到ip 中。
  cout << "Address stored inip var" << ip << endl;
  cout << "value of *ip variable:" << *ip << endl;
}


void yinyongUsing(){
     //引用和指针特别容易弄混，
     //区别：不存在空引用。引用必须连接到一块合法的内存。
     //一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
     // 引用必须在创建时被初始化。指针可以在任何时间被初始化。
     int i = 17;
     int& r = i;

     //Note:可以引用 int。

}

void timeUsing(){
  time_t now = time(0);
  char* dt = ctime(&now);
  cout << "本地日期和时间" <<dt <<endl;

  tm *gmtm = gmtime(&now);
  dt = asctime(gmtm);
  cout << "UTC  日期和时间: " << dt << endl;
}

void formatTime(){
     // 基于当前系统的当前日期/时间
   time_t now = time(0);
 
   cout << "1970 到目前经过秒数:" << now << endl;
 
   tm *ltm = localtime(&now);
 
   // 输出 tm 结构的各个组成部分
   cout << "年: "<< 1900 + ltm->tm_year << endl;
   cout << "月: "<< 1 + ltm->tm_mon<< endl;
   cout << "日: "<<  ltm->tm_mday << endl;
   cout << "时间: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
}

