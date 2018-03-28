#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"1 3 C 4 6 7 8 5"<<endl;
    string line;
    int i=1;
    while(getline(cin,line)) {
        if(line=="END") {
            if(i%4==2||i%4==0) {
                cout<<"1 1 10 10"<<endl;
                cout<<"1 3 10 10"<<endl;
                cout<<"1 4 10 10"<<endl;
                cout<<"1 C 10 10"<<endl;
                cout<<"1 5 10 10"<<endl;
                cout<<"1 7 10 10"<<endl;
                cout<<"1 8 10 10"<<endl;
                cout<<"1 6 10 10"<<endl;
                cout<<"0"<<endl;
            } else if(i%4==1) {
                cout<<"1 1 3 23"<<endl;
                cout<<"1 4 3 23"<<endl;
                cout<<"1 C 3 23"<<endl;
                cout<<"1 7 3 23"<<endl;
                cout<<"1 8 3 23"<<endl;
                cout<<"0"<<endl;
            } else {
                cout<<"1 1 18 23"<<endl;
                cout<<"1 4 18 23"<<endl;
                cout<<"1 C 18 23"<<endl;
                cout<<"1 7 18 23"<<endl;
                cout<<"1 8 18 23"<<endl;
                cout<<"0"<<endl;
            }
            ++i;
        }
    }
    return 0;
}
