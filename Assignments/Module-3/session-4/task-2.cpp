
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

class YouTuber : public SocialMediaUser
{
    public:
    string channelName="Ayushi Vlogs";

    void uploadVideo(string title)
    {
        cout<<"Video "<<title<<" uploaded to "<<channelName;
    }
};

int main()
{
    YouTuber y1;

    y1.displayProfile();
    y1.uploadVideo("My First Video");
}

