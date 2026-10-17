#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("my_fav_songs.txt", ios::app);
    string song;

    cout<<"Enter new song name: ";
    getline(cin, song);

    fout<<song<<endl;
    fout.close();

    cout<<"New song added successfully.";
}
