#include<iostream>
using namespace std;

class ProductSearch
{
    public:
    void searchProduct(string name)
    {
        cout<<"Searching product: "<<name<<endl;
    }

    void searchProduct(string name, string category)
    {
        cout<<"Searching product: "<<name<<endl;
        cout<<"Category: "<<category<<endl;
    }
};

int main()
{
    ProductSearch p1;

    p1.searchProduct("Mobile");
    p1.searchProduct("Shoes", "Fashion");
}
