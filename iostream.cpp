#include<iostream>
#include<fstream>  //文件和流
using namespace std;

int main(){
    char data[100] = {'a','f','i','l','e'};
    
    //以写模式打开文件
    // ofstream outfile;
    // outfile.open("file.dat");
    // cout <<"writing to the fiel" <<endl;
    // outfile << data << endl;
    // outfile.close();

    //以读模式打开文件
    ifstream infile;
    infile.open("file.dat");
    cout << "Reading from the file" <<endl;
    infile >> data;
     //在屏幕上写入数据
     cout << data << endl;
     // 再次从文件读取数据，并显示它
     infile >> data;
     cout << data <<endl;
     //关闭文件
     infile.close();


     //分配内存相关：

     double *pvalue = NULL;
     pvalue = new double;

     *pvalue= 29494.99;
     cout << "Value of pvalue:"<< *pvalue <<endl;
     
     //可以使用delete 操作符，删除掉已经使用的的空间。
     delete pvalue;

    return 0;
}


