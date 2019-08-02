#include<pthread.h>
#include<iostream>

using namespace std;


#define NUM_THREADS 5


// 线程的运行函数

void* say_hello(void* args){

    cout << "Hello Runoob!" <<endl;
    return 0;
}

void* printHello(void *threadid){
    int tid = *((int*)threadid);
    cout << "Hello Runoob! 线程 ID, "<< tid << endl;
    pthread_exit(NULL);
}

int main(){

    pthread_t tids[NUM_THREADS];
    
    int indexs[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++)
    {
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        // int ret = pthread_create(&tids[i],NULL,say_hello,NULL);
        cout <<  "创建线程" << i << endl;
        indexs[i] = i;
        int ret = pthread_create(&tids[i],NULL,printHello,((void*)(&(indexs[i]))));
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
    }

    pthread_exit(NULL);

    // pthread_join(pthredid,status) 假如在A线程中调用pthread_join(B，status),
    // 会等B线程执行完毕后，再执行A。
    
    
}