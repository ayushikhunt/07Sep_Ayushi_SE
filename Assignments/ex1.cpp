#include<iostream>
#include<conio.h>
using namespace std;
int num=10; //global
int main()
{
    int num=100; //local
    cout<<"local :"<<num<<endl;
    cout<<"global :"<<::num<<endl;
    cout<<"local +global :"<<num + ::num;
    return 0;
}