
#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
    string username="Ayushi";
    int followers=500;
};

class YouTuber : public SocialMediaUser
{
    public:
    string channelName="Ayushi Gaming";
};

class GamingYouTuber : public YouTuber
{
    public:
    void streamGame(string gameName)
    {
        cout<<username<<" is now streaming "
            <<gameName<<" on "<<channelName;
    }
};

int main()
{
    GamingYouTuber g1;

    g1.streamGame("Minecraft");
}

