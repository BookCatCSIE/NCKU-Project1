#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"1 3 C 6 4 8 2 9"<<endl;
    string line;
    int i=0;
    while(getline(cin,line)) {
        if(line=="END") {
            i=i+1;
            if(i%6==5||i%6==0) {
                cout<<"1 4 10 9"<<endl;
                cout<<"1 1 10 9"<<endl;
                cout<<"1 3 10 9"<<endl;


                cout<<"1 C 10 9"<<endl;
                cout<<"1 6 10 9"<<endl;


                cout<<"0"<<endl;
            } else if(i%6==2) {
                cout<<"1 1 3 23"<<endl;
                cout<<"1 8 3 23"<<endl;
                cout<<"1 C 3 23"<<endl;
                cout<<"1 3 3 23"<<endl;

                cout<<"1 4 3 23"<<endl;
                cout<<"1 9 10 1"<<endl;
                cout<<"1 6 3 23"<<endl;
                cout<<"0"<<endl;
            } else if(i%6==1) {
                cout<<"1 8 8 21"<<endl;
                cout<<"1 C 8 21"<<endl;
                cout<<"1 1 8 21"<<endl;

                cout<<"1 3 8 21"<<endl;
                cout<<"1 6 8 21"<<endl;

                cout<<"1 4 8 21"<<endl;
                cout<<"0"<<endl;
            } else if(i%6==3||i%6==4) {

                cout<<"1 4 7 10"<<endl;
                cout<<"1 1 7 10"<<endl;

                cout<<"1 C 7 10"<<endl;
                cout<<"1 3 7 10"<<endl;
                cout<<"1 6 7 10"<<endl;
                cout<<"1 2 7 10"<<endl;
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}
