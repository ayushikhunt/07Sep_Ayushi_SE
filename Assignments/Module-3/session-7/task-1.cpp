#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("my_fav_songs.txt");

    fout<<"Perfect"<<endl;
    fout<<"Dynamite"<<endl;
    fout<<"Butter"<<endl;
    fout<<"Shape of You"<<endl;
    fout<<"Night Changes"<<endl;

    fout.close();

    cout<<"Songs saved successfully.";
}
