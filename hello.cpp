#include <iostream>
#include <limits>
using namespace std;
typedef int inttype;
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
    enum color {red,green,blue} c;
    c = blue; // 此时blue = 2;

    //定义变量
    int i,j;
    return 0;
}