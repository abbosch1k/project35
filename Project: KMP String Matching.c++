#include <iostream>
using namespace std;

int main(){
    string text="ababc", pat="abc";

    if(text.find(pat)!=string::npos)
        cout<<"Found";
}
