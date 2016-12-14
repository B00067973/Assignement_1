#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
string user(string username);
string admin(string username);
int main()
{
    int a;
    string username, password,password1="123";
    cout << "1. Login" << endl;
    cin >>a;
    system("cls");
    if(a==1){
        while (password!=password1){
        cout << "Username:";
        cin >> username;
        cout << "Password:";
        cin >> password;
        if( username =="admin"){
            string admin(username);
        }else if(username !="admin"){
        string user(username);
        }
        if (password!=password1){
        system("cls");
        cout<<"Wrong password, please try again"<<endl;
        }
        }
        }
}

string user(string username){
int a;
while (a!=1||a!=2){
    system("cls");
cout<<"Please Choose One of the following options:"<<endl;
cout<<"1. Quiz"<<endl;
cout<<"2. Past Results"<<endl;
cin>>a;
if (a==1){
    //enter quiz coding
}else if (a==2){
    //enter past result coding
    }else{
        system("cls");
    cout<<"Invalid option"<<endl;}
}
}
string admin(string username){
int a;
string userna;
while (a!=1||a!=2){
system("cls");
cout<<"Please Choose One of the following options:"<<endl;
cout<<"1. Check past result for a student"<<endl;
cout<<"2. Check Class average"<<endl;
cin>>a;
if (a==1){
    system("cls");
    cout<<"Enter student's number"<<endl;
    cin>>userna;

}else if (a==2){
    //enter past result coding
    }else{
        system("cls");
    cout<<"Invalid option"<<endl;}
}
}
