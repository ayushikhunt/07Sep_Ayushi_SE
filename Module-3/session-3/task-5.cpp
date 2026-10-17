
#include<iostream>
#include<fstream>
using namespace std;

class Playlist
{
    public:
    string name;

    Playlist()
    {
        name="My Favourites";
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        file<<name;

        file.close();

        cout<<"Playlist saved successfully!"<<endl;
    }
};

int main()
{
    Playlist p1;
}

