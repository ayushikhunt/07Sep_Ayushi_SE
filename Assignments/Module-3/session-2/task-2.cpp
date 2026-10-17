
#include<iostream>
using namespace std;

class Playlist
{
    public:
    bool isPublic=true;

    void togglePublic()
    {
        isPublic=!isPublic;
    }

    void display()
    {
        cout<<"Is Public: "<<isPublic<<endl;
    }
};

int main()
{
    Playlist p1;

    p1.togglePublic();
    p1.display();

    p1.togglePublic();
    p1.display();

}

