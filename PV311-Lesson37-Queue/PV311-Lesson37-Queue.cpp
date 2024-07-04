#include "MyQueue.h"
#include <string>
using std::string;

int main()
{
    MyQueue::Queue<string> pv311;

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
    }
}

