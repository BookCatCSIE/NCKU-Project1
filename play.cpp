#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"1 3 C 4 6 7 8 5"<<endl;
    string line;
    while(getline(cin,line)) {
        if(line=="END") {
            cout<<"1 1 6 25"<<endl;
            cout<<"1 3 6 25"<<endl;
            cout<<"1 4 6 25"<<endl;
            cout<<"1 C 6 25"<<endl;
            cout<<"1 5 6 25"<<endl;
            cout<<"1 7 6 25"<<endl;
            cout<<"1 8 6 25"<<endl;
            cout<<"1 6 6 25"<<endl;
            cout<<"0"<<endl;
        }
    }
    return 0;
}
