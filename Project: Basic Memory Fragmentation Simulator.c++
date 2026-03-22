#include <iostream>
using namespace std;

int main(){
    int mem[5]={1,0,1,0,1};

    for(int i=0;i<5;i++)
        if(mem[i]==0)
            cout<<"Free block "<<i<<endl;
}
