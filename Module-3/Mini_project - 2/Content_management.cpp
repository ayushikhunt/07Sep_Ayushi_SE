
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

class Content
{
    public:
    string title;
    string platform;
    int views;
    string status;

    void displayDetails()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Platform: "<<platform<<endl;
        cout<<"Views: "<<views<<endl;
        cout<<"Status: "<<status<<endl;
    }
};

class ContentManager
{
    Content items[100];
    int count;

    public:
    ContentManager()
    {
        count = 0;
        loadContent();
    }

    void loadContent()
    {
        ifstream fin("content_list.txt");
        string viewText;

        count = 0;

        while(count < 100 &&
              getline(fin, items[count].title, '|'))
        {
            getline(fin, items[count].platform, '|');
            getline(fin, viewText, '|');
            getline(fin, items[count].status);

            stringstream ss(viewText);
            ss >> items[count].views;

            count++;
        }

        fin.close();
    }

    void saveContent()
    {
        ofstream fout("content_list.txt");

        for(int i=0; i<count; i++)
        {
            fout<<items[i].title<<"|"
                <<items[i].platform<<"|"
                <<items[i].views<<"|"
                <<items[i].status<<endl;
        }

        fout.close();
    }

    void addContent()
    {
        if(count >= 100)
        {
            cout<<"Content list is full."<<endl;
            return;
        }

        cout<<"Enter content title: ";
        getline(cin, items[count].title);

        cout<<"Enter platform: ";
        getline(cin, items[count].platform);

        cout<<"Enter views: ";
        cin>>items[count].views;
        cin.ignore();

        cout<<"Enter status: ";
        getline(cin, items[count].status);

        count++;
        saveContent();

        cout<<"Content added successfully!"<<endl;
    }

    void displayContent()
    {
        loadContent();

        if(count == 0)
        {
            cout<<"No content found."<<endl;
            return;
        }

        cout<<"\n===== Content List =====\n";

        for(int i=0; i<count; i++)
        {
            cout<<"\nContent No: "<<i+1<<endl;
            items[i].displayDetails();
        }
    }

    void updateStatus()
    {
        displayContent();

        if(count == 0)
            return;

        int num;

        cout<<"\nEnter content number to update: ";
        cin>>num;
        cin.ignore();

        if(num < 1 || num > count)
        {
            cout<<"Invalid content number."<<endl;
            return;
        }

        cout<<"Enter new status: ";
        getline(cin, items[num-1].status);

        saveContent();

        cout<<"Status updated successfully!"<<endl;
        displayContent();
    }

    void deleteContent()
    {
        displayContent();

        if(count == 0)
            return;

        int num;

        cout<<"\nEnter content number to delete: ";
        cin>>num;
        cin.ignore();

        if(num < 1 || num > count)
        {
            cout<<"Invalid content number."<<endl;
            return;
        }

        for(int i=num-1; i<count-1; i++)
        {
            items[i] = items[i+1];
        }

        count--;
        saveContent();

        cout<<"Content deleted successfully!"<<endl;
        displayContent();
    }

    void menu()
    {
        int choice;

        do
        {
            cout<<"\n===== Content Manager =====\n";
            cout<<"1. Add Content"<<endl;
            cout<<"2. Display Content"<<endl;
            cout<<"3. Update Status"<<endl;
            cout<<"4. Delete Content"<<endl;
            cout<<"5. Exit"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            cin.ignore();

            switch(choice)
            {
                case 1:
                    addContent();
                    break;

                case 2:
                    displayContent();
                    break;

                case 3:
                    updateStatus();
                    break;

                case 4:
                    deleteContent();
                    break;

                case 5:
                    cout<<"Program closed."<<endl;
                    break;

                default:
                    cout<<"Invalid choice."<<endl;
            }

        }while(choice != 5);
    }
};

int main()
{
    ContentManager c1;
    c1.menu();
}

