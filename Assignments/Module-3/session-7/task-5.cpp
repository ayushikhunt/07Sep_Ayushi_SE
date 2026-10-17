#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("insta_followers.txt");
    string username;
    int count = 0;

    while(getline(fin, username))
    {
        count++;
    }

    fin.close();

    cout<<"Total Followers: "<<count;
}
