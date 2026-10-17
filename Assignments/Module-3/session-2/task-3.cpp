
#include<iostream>
using namespace std;

class FoodOrder
{
    public:
    int orderId=101;
    string restaurantName="Pizza House";
    bool isDelivered=false;

    void markDelivered()
    {
        isDelivered=true;
        cout<<"Order delivered successfully!"<<endl;
    }

    void display()
    {
        cout<<"Order ID: "<<orderId<<endl;
        cout<<"Restaurant: "<<restaurantName<<endl;
        cout<<"Is Delivered: "<<isDelivered<<endl;
    }
};

int main()
{
    FoodOrder f1;

    f1.markDelivered();
    f1.display();

}

