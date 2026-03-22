#include <iostream>
using namespace std;

int main(){
    int jobs[3]={5,3,1};
    int q=2;

    for(int i=0;i<3;i++){
        if(jobs[i]>q){
            jobs[i]-=q;
            cout<<"Run "<<i<<endl;
            i--;
        } else {
            cout<<"Finish "<<i<<endl;
        }
    }
}
