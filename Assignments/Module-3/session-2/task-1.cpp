
#include<iostream>
using namespace std;

class Playlist
{
    public:
    string name="My Songs";
    string createdOn="16-10-2026";
    bool isPublic=true;

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Created On: "<<createdOn<<endl;
        cout<<"Is Public: "<<isPublic;
    }
};

int main()
{
    Playlist p1;
    p1.display();

}

