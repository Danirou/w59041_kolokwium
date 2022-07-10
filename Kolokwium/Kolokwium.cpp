#include <iostream>
#include "Konto.h"

using namespace std;

int main()
{

    Konto account = Konto("Andrzej", "Piaseczny", 12121214);
    Konto account2 = Konto("Paweł", "Gaweł", 1223142);
    
    cout << "Account balance: " << account.getAccountBalance() << endl;

    account.setAccountBalance(10000);
    cout << "Account balance: " << account.getAccountBalance() << endl;

    account2.changePersonName("Mateusz", "Kowalski");
    account2.setAccountBalance(1000);
    cout << "Account2 balance: " << account2.getAccountBalance() << endl;
    
    Konto account3 = Konto(account2);
    cout << "Account3 balance: " << account3.getAccountBalance() << endl;

    account3.setAccountPercent(20);

    cout << "Percentage change: " << account3.getAccountBalance() << endl;

    account3.~Konto();

    account3++;
    cout << "Percentage change: " << account3.getAccountBalance() << endl;
}