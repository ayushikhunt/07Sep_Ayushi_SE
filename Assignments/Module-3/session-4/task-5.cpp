
#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
    string username="Ayushi";
    int followers=500;
};

class InstagramInfluencer : public SocialMediaUser
{
    public:
    void postStory(string storyTitle)
    {
        cout<<username<<" posted a new story: "
            <<storyTitle;
    }
};

int main()
{
    InstagramInfluencer i1;

    i1.postStory("My Daily Life");
}

