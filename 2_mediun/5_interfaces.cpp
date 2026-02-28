#include <bits/stdc++.h>
using namespace std;

class PaymentGateway
{
public:
    virtual void processPayment(double amount) = 0;
};

class CreditCardPayment : public PaymentGateway
{
public:
    void processPayment(double amount) override
    {
        cout << fixed << setprecision(2);
        cout << "Processing credit card payment of " << amount << endl;
    }
};

class UPIPayment : public PaymentGateway
{
public:
    void processPayment(double amount) override
    {
        cout << fixed << setprecision(2);
        cout << "Processing UPI payment of " << amount << endl;
    }
};

int main()
{
    vector<string> paymentMethods = {"credit", "upi"};
    vector<double> amounts = {284.5, 27476.2};

    for (int j = 0; j < paymentMethods.size(); j++)
    {
        PaymentGateway *payment = nullptr;

        string method = paymentMethods[j];
        transform(method.begin(), method.end(), method.begin(), ::tolower);

        if (method == "credit")
        {
            payment = new CreditCardPayment();
        }
        else if (method == "upi")
        {
            payment = new UPIPayment();
        }

        if (payment != nullptr)
        {
            payment->processPayment(amounts[j]);
            delete payment;
        }
    }

    return 0;
}