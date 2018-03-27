#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"1 3 C 4 6 7 8 5"<<endl;
    string line;
    while(getline(cin,line)) {
        if(line=="BEGIN") {
            cout<<"1 1 14 24"<<endl;
            cout<<"1 3 14 24"<<endl;
            cout<<"1 4 14 24"<<endl;
            cout<<"1 C 14 24"<<endl;
            cout<<"1 5 14 24"<<endl;
            cout<<"1 7 14 24"<<endl;
            cout<<"1 8 14 24"<<endl;
            cout<<"1 6 14 24"<<endl;
            cout<<"0"<<endl;
        }
    }
    return 0;
}
