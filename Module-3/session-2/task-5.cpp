
#include<iostream>
using namespace std;

class FoodOrder
{
    public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name, bool delivered)
    {
        orderId=id;
        restaurantName=name;
        isDelivered=delivered;
    }

    FoodOrder(FoodOrder &f)
    {
        orderId=f.orderId;
        restaurantName=f.restaurantName;
        isDelivered=f.isDelivered;
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
    FoodOrder f1(101,"Pizza House",false);
    FoodOrder f2(f1);

    f2.display();
}

