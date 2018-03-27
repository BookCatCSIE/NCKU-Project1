#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout<<"1 3 C 4 6 7 8 5"<<endl;
    string line;
    int a,b;
    srand(time(NULL));
    while(getline(cin,line)) {
        if(line=="END") {
            a=(rand()%14)+4;
            b=(rand()%13)+12;
            cout<<"1 1 a b"<<endl;
            cout<<"1 3 a b"<<endl;
            cout<<"1 4 a b"<<endl;
            cout<<"1 C a b"<<endl;
            cout<<"1 5 a b"<<endl;
            cout<<"1 7 a b"<<endl;
            cout<<"1 8 a b"<<endl;
            cout<<"1 6 a b"<<endl;
            cout<<"0"<<endl;
        }
    }
    return 0;
}
