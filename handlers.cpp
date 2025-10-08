#include <iostream>
#include <iomanip>
#include "handlers.h"
using namespace std;

void handlePayPal(double amount) {
    cout << fixed << setprecision(2);
    cout << "Processing PayPal payment of $" << amount << endl;
    // Future PayPal integration logic here
}

void handleGooglePay(double amount) {
    cout << fixed << setprecision(2);
    cout << "Processing GooglePay payment of $" << amount << endl;
    // Future GooglePay integration logic here
}

void handleCreditCard(double amount) {
    cout << fixed << setprecision(2);
    cout << "Processing Credit Card payment of $" << amount << endl;
    // Future Credit Card integration logic here
}
