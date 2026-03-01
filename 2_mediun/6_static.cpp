#include <bits/stdc++.h>
using namespace std;

class Counter
{
public:
    static int count;

    Counter()
    {
        count++;
    }

    static int getCount()
    {
        return count;
    }

    static void resetCount()
    {
        count = 0;
    }
};

int Counter::count = 0;

int main()
{

    int count;
    std::cin >> count;

    while (count-- > 0)
    {
        Counter obj;
        cout << "Object "<< obj.getCount() << " created."<< endl;
    }

    std::cout << "Number of objects created : " << Counter::getCount() << std::endl;

    return 0;
}