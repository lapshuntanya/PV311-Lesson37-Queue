#include "MyQueue.h"
#include "PriorityQueue.h"
#include <string>
using std::string;

int main()
{
    /*MyQueue::Queue<string> pv311;

    pv311.push_back("Олег");
    pv311.push_back("Данило");
    pv311.push_back("Ярослав");
    pv311.showInfo();

    cout << "______________________________\n";
    while (!pv311.isEmpty())
    {
        pv311.showInfo();
        cout << pv311.first() << endl << endl;
        pv311.pop_front();
    }*/

    MyQueue::PriorityQueue<int> a;

    a.push_back(34);
    a.push_back(64);
    a.push_back(57);
    a.push_back(12);
    a.push_back(92);
    a.showInfo();
    cout << "______________________________\n";
    while (!a.isEmpty())
    {
        a.showInfo();
        cout << a.first() << endl << endl;
        a.pop_front();
    }

}

