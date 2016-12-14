#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
class Teacher{
struct StudGrade{
    double ReadGrade(string susername, int sscore);
};
struct GroupAverage{
    double ReadClassAverage(double sum, double no);
};
};
class Student{
struct Quiz{
    public:
double ReadQuiz(/*Martin*/);
double SaveScore(string studentno,double stud_score);
double RandomQuestion();
double CheckAnswer();
int score;
float average;

};
struct Grade{
double ReadScore();};
};
int main()
{
    int a=0,b=0;
    string login,password="0",passwrd="1",snum;
    cout << "Please Select from Following options:" << endl;
    cout << "1. Login"<<endl;
    cin >> a;
    if (a==1){
        system("cls");
        while (password!=passwrd){
        cout<<"Enter your details below:"<<endl;
        cout<<"Login:";
        cin>>login;
        if(login == "admin"){
            password = "98765";
            cout<<"Password:";
            cin>>passwrd;
            if (passwrd != password){
                system("cls");
                cout<<"Incorrect password, please try again"<<endl;
            }else if (password == passwrd){
            system ("cls");
            cout<<"You have accessed admin Menu, Please select one of available options"<<endl;
            while (b!=1&&b!=2){
            cout<<"1. Check student's grade (student number required)"<<endl;
            cout<<"2. Check Class Average"<<endl;
            cin>>b;
             if (b==1){
             system("cls");
             cout<<"Enter student's number:";
             cin>> snum;
            }else if (b==2){
            system("cls");
            //average code;
            }else{
            system("cls");
            cout<<"invalid choice please try again"<<endl;}
            }}
        }else if (login != "admin"){
        password="12345";
        cout<<"Password:";
        cin>>passwrd;
        ofstream myfile;
  myfile.open (login);


        if (passwrd != password){
                system("cls");
                cout<<"Incorrect password, please try again"<<endl;
            }else if (password == passwrd){
            system ("cls");
            cout<<"You have accessed student Menu. Please select one of available options"<<endl;
            while (b!=1&&b!=2){
            cout<<"1. Take a Quiz"<<endl;
            cout<<"2. Check your Last Result"<<endl;
            cin>>b;
            if (b==1){
             system("cls");
             //quiz
             myfile << "Writing this to a file.\n";
             myfile.close();
            }else if (b==2){
             system("cls");
            //results
            }else{
            system("cls");
            cout<<"invalid choice please try again"<<endl;}
        }}
        }
    }
    return 0;
}
}
double ReadClassAverage(double sum, double no){
double sum,no,result;
result = sum/no;
return result;
 }
