
#include<iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title=t;
        isDone=false;
    }

    void markDone()
    {
        isDone=true;
    }

    void display()
    {
        cout<<title<<" - ";

        if(isDone==true)
            cout<<"DONE";
        else
            cout<<"Pending";

        cout<<endl;
    }
};

class TaskList
{
public:
    Task tasks[5];
    int count;

    TaskList() : tasks{Task(""),Task(""),Task(""),Task(""),Task("")}
    {
        count=0;
    }

    void addTask(string title)
    {
        if(count<5)
        {
            tasks[count]=Task(title);
            count++;
        }
    }

    void markTaskDone(int index)
    {
        if(index>=0 && index<count)
        {
            tasks[index].markDone();
        }
    }

    void showTasks()
    {
        int i;

        for(i=0;i<count;i++)
        {
            cout<<i+1<<". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Study C");
    list.addTask("Learn Python");
    list.addTask("Complete Assignment");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}

