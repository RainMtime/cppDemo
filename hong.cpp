//c++ 中的宏定义
#include<iostream>
using namespace std;
#define PI 3.1415  //宏定义常量
#define MIN(a,b) (a<b ?a:b) //带有参数的宏
//条件编译

#define DEBUG

int main(){


//不用编译的代码相关
#ifdef DEBUG
   cerr <<"Variable x = " << endl;
#endif

#if 0
 cout<< "这个部分等于是注释哦"
#endif

return 0;
}
  



