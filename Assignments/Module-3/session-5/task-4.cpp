#include<iostream>
using namespace std;

class MusicPlayer
{
    public:
    virtual void play(string song)
    {
        cout<<"Playing: "<<song<<endl;
    }
};

class SpotifyPlayer : public MusicPlayer
{
    public:
    void play(string song)
    {
        cout<<"Streaming on Spotify: "<<song<<endl;
    }
};

int main()
{
    SpotifyPlayer s1;
    MusicPlayer *m1 = &s1;

    m1->play("Perfect");
}
