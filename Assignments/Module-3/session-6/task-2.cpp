#include<iostream>
using namespace std;

class InstaStory
{
    protected:
    int storyViews = 500;
};

class SponsoredStory : public InstaStory
{
    public:
    void displayViews()
    {
        cout<<"Story Views: "<<storyViews;
    }
};

int main()
{
    SponsoredStory s1;
    s1.displayViews();
}
