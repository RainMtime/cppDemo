#include<iostream>
#include<limits>
using namespace std;
int main(){
   cout <<"Hello ,world"<< endl;

   cout << "bool: \t\t" << "所占的字节数： " << sizeof(int)<<endl;
   cout << "\t 最大值" << (numeric_limits<int>::max)();
   return 0;
}