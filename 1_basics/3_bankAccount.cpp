#include <bits/stdc++.h>
using namespace std;

class Bankaccount
{
private:
    string name;
    double balance;

public:
    Bankaccount(string name, double balance)
    {
        this->name = name;
        this->balance = balance;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " credited to " << name << "'s account." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
            return;
        }
        balance -= amount;
        cout << amount << " debited from " << name << "'s account." << endl;
    }
};

int main() {
    Bankaccount account1("Abhinav", 100000.0);
    Bankaccount account2("ZiKt0R", 50000.0);

    cout << account1.getName() << "'s balance: " << account1.getBalance() << endl;
    cout << account2.getName() << "'s balance: " << account2.getBalance() << endl;

    account1.deposit(20000.0);
    account2.withdraw(10000.0);

    cout << account1.getName() << "'s balance: " << account1.getBalance() << endl;
    cout << account2.getName() << "'s balance: " << account2.getBalance() << endl;

    return 0;
}