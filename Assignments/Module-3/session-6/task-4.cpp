#include<iostream>
using namespace std;

class UserProfile
{
    private:
    string phoneNumber;

    public:
    void setPhoneNumber(string phone)
    {
        phoneNumber = phone;
    }

    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile u1;

    u1.setPhoneNumber("4576543210");

    cout<<"Phone Number: "
        <<u1.getPhoneNumber();
}
