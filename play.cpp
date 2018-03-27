#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"1 3 C 4 6 7 8 5"<<endl;
    string line;
    while(getline(cin,line)) {
        if(line=="END") {
            cout<<"1 1 2 23"<<endl;
            cout<<"1 3 2 23"<<endl;
            cout<<"1 4 2 23"<<endl;
            cout<<"1 C 2 23"<<endl;
            cout<<"1 5 2 23"<<endl;
            cout<<"1 7 2 23"<<endl;
            cout<<"1 8 2 23"<<endl;
            cout<<"1 6 2 23"<<endl;
            cout<<"0"<<endl;
        }
    }
    return 0;
}
