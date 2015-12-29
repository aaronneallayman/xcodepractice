#include <iostream>

using namespace std;

int main(){
    cout<<"hello world";
    cin.ignore();
    int x, y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    int operation;
    cout<<"1)Add or 2)subtract";
    cin>>operation;

    switch(operation){
        case 1:
            cout << x+y;
            break;
        case 2:
            cout<< x-y;
            break;
        default:
        cout<<"Error: not an operation";
            break;
    }
    
}