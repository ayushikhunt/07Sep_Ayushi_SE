
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

int main()
{
    SocialMediaUser s1;

    s1.displayProfile();
}

