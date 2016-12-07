#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a;
    string username, password="password",password1="password1";
    while(a!=1&&a!=2){
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "Please Select your option:"<<endl;
    cin >>a;
    system("cls");
    if(a==1){
        cout << "Username:";
        cin >> username;
        cout << "Password:";
        cin >> password;
        system("cls");
    }else if(a==2){
    cout<<"Registration form"<<endl;
    cout<< "Username:";
    cin >> username;
    while(password!=password1){
    cout<< "Password:";
    cin>> password;
    cout<<"Repeat Password:";
    cin>> password1;
    if(password!=password1){
        cout<<"Passwords don't match"<<endl;
        system("cls");
    }
    }
    return 0;
}
    }}
