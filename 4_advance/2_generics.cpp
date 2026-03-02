#include <bits/stdc++.h>
using namespace std;

template <typename T>

class ExampleGenerics
{
private:
    vector<T> list;

public:
    void add(T val)
    {
        list.push_back(val);
    }

    void removeLast()
    {
        if (list.size() == 0)
        {
            cout << "List is empty.";
            return;
        }
        list.pop_back();
    }

    T getElement(int i)
    {
        return list[i];
    }

    void print()
    {
        for (T el : list)
        {
            cout << el << endl;
        }
    }
};

int main()
{
    // Both the vectors below will give us same methods to use (reusable). It's also typesafe since list1 only supports 'int' and list2 only supports 'string'. Hence it is an example of generics.
    vector<int> list1;
    vector<string> list2;

    // Using the example generics
    ExampleGenerics<int> obj; // providing 'int' as the type
    obj.add(10);
    obj.add(20);
    obj.add(30);

    cout << obj.getElement(0) << endl;
    obj.print();
    obj.removeLast();
    obj.print();
}