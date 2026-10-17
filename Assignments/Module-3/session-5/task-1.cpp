#include<iostream>
using namespace std;

class PaymentProcessor
{
    public:
    void processPayment(double amount)
    {
        cout<<"Without coupon"<<endl;
        cout<<"Final Amount: "<<amount<<endl;
    }

    void processPayment(double amount, string coupon)
    {
        cout<<"With coupon: "<<coupon<<endl;
        amount = amount - 100;
        cout<<"Final Amount: "<<amount<<endl;
    }
};

int main()
{
    PaymentProcessor p1;

    p1.processPayment(1000);
    p1.processPayment(1000, "SAVE100");
}
