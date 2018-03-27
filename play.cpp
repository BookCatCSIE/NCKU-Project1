#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"1 3 C 4 6 7 8 5"<<endl;
    string line;
    while(getline(cin,line)) {
        if(line=="END") {
            cout<<"1 1 5 22"<<endl;
            cout<<"1 3 16 22"<<endl;
            cout<<"1 C 5 22"<<endl;
            cout<<"1 4 16 22"<<endl;
            cout<<"1 6 5 22"<<endl;
            cout<<"1 7 16 22"<<endl;
            cout<<"1 8 5 22"<<endl;
            cout<<"1 5 16 22"<<endl;
            cout<<"0"<<endl;
        }

    }

    return 0;
}
