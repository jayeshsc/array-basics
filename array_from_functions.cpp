#include<iostream>
#include<ctime>
using namespace std;

int *getRandom(){
    static int r[10];
    srand((unsigned)time(NULL));
    for(int i = 0;i<10;++i){
        r[i] = rand();
        cout<<r[i]<<endl;
    }
    return r;
}
int main(){
    int *p;
    p = getRandom();
    return 0;
}