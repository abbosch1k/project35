#include <iostream>
using namespace std;

int main(){
    string line;

    while(getline(cin,line)){
        if(line=="print hello")
            cout<<"hello"<<endl;
        if(line=="exit")
            break;
    }
}
