#include<iostream>
#include<cstring>
using namespace std;

void usingStruct();

void printBook( struct Books book);

int main(){
  char str[]  = "Hello C++";
  //标准输出流
  cout << "Value of str is :" << str <<endl;
  char name[50];
  //标准输入流：
//   cout << "请输入您的名称：";
//   cin >> name;
//   cout << "你的名称是： " << name << endl;

  char err[] = "Unable to read!";
  //标准错误流:
  cerr << "Error message :" << err << endl;

  usingStruct();
  
  return 0;
}

struct  Books
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

void usingStruct(){
  Books book1;
  Books book2;

strcpy(book1.title,"C++ programing");
strcpy(book1.author,"Runoob");
strcpy(book1.subject,"前端技术");
book1.book_id = 1245;

printBook(book1);

}

void printBook(Books book){
  cout << book.book_id<< endl;
}

void usingBookWithPointer(){
   Books book1;
   Books *p;
   p = &book1;
 strcpy(p->title,"C++ programing");
 strcpy(p->author,"Runoob");
 strcpy(p->subject,"前端技术");
}