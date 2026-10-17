#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("my_fav_songs.txt");
    string song;

    while(getline(fin, song))
    {
        cout<<song<<endl;
    }

    fin.close();
}
