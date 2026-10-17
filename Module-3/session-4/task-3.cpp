
#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
    string username="Ayushi";
    int followers=500;

    void displayProfile()
    {
        cout<<"Username: "<<username<<endl;
        cout<<"Followers: "<<followers<<endl;
    }
};

class Podcaster : public SocialMediaUser
{
    public:
    string podcastName="Tech Talks";

    void publishEpisode(string episodeTitle)
    {
        cout<<"Episode "<<episodeTitle
            <<" published on "<<podcastName;
    }
};

int main()
{
    Podcaster p1;

    p1.displayProfile();
    p1.publishEpisode("Episode 1");
}

