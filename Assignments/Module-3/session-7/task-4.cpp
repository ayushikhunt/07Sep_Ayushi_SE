#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("wishlist.txt");
    string name;
    float price;
    int i;

    for(i=1; i<=3; i++)
    {
        cout<<"Enter product name: ";
        getline(cin, name);

        cout<<"Enter product price: ";
        cin>>price;
        cin.ignore();

        fout<<name<<" "<<price<<endl;
    }

    fout.close();

    ifstream fin("wishlist.txt");

    cout<<"\n===== Wishlist =====\n";

    while(fin>>name>>price)
    {
        cout<<"Product: "<<name
            <<", Price: "<<price<<endl;
    }

    fin.close();
}
