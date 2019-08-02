#include<iostream>
using namespace std;

//函数模版应用
template <typename T>

inline T  Max(T  a,T b){
    return a<b ? b:a;
}

int main(){
    int i = 39;
    int j = 20;
    cout << "Max(i,j):" << Max(i,j) <<endl;

    double  f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1,f2):" <<Max(f1,f2)<<endl;

    return 0;
}

//类模版应用
template <class T>
class Stack
{
private:
    T elems;
public:
    void push(T); //入栈
    void pop();
    Stack();
    ~Stack();
};
template <class T>
void Stack<T>::push(T elem){
    //do something;
}

