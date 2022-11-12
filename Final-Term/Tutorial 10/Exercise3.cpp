#include <iostream>

using namespace std;

class Account
{
    private:
        double balance;
    public:
        Account()
        {
            balance = 0.0;
        }

        Account(double myBalance)
        {
            if(myBalance > 0)
            {
                balance = myBalance;
            }
            else
            {
                balance = 0.0;
            }
        }

        void withdraw(double amount)
        {
            if(amount <= balance && amount > 0)
            {
                balance -= amount;
            }
            else
            {
                cout <<"Withdraw unsuccessfull. Your account money is less than the amount u want to withdraw." << endl;
            }
        }

        void Deposit(double amount)
        {
            if(amount > 0)
            {
                balance += amount;
            }
            else
            {
                cout <<"U can not deposit " << amount << endl;
            }
        }

        /*Human(string personName)
        {
            name = personName;
        }*/

        double getBalance()
        {
            return balance;
        }

        void setBalance(double myBalance)
        {
            balance = myBalance;
        }
};


int main()
{
    Account ob;
    ob.setBalance(100);
    cout << ob.getBalance() << endl;

    ob. Deposit(-100);
    cout << ob.getBalance() << endl;

    ob.withdraw(-50);
    cout << ob.getBalance() << endl;
    return 0;
}