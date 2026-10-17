
#include<iostream>
using namespace std;

class Playlist
{
    public:
    string name="My Songs";
    string songs[3];
    int count=0;

    void addSong(string songTitle)
    {
        songs[count]=songTitle;
        count++;
    }

    void display()
    {
        int i;

        cout<<"Playlist: "<<name<<endl;
        cout<<"Songs List:"<<endl;

        for(i=0;i<count;i++)
        {
            cout<<songs[i]<<endl;
        }
    }
};

int main()
{
    Playlist p1;

    p1.addSong("Perfect");
    p1.addSong("Dynamite");
    p1.addSong("Butter");

    p1.display();

}

