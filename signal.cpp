#include<iostream>
#include<csignal>
#include <unistd.h>
using namespace std;

void signalHandler(int signum){

    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}
int main(){
 
    signal(SIGINT,signalHandler);
    int i = 0;
    while (++i)
    {
        cout << "Going to sleep...." << endl;
        sleep(1);
        if (i==3)
        {
            raise(SIGINT);
        }
        
    }
    
    return 0;
}