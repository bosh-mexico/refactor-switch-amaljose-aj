#include <iostream>
#include "checkout.h"
#include "handlers.h"
#include "ServiceLocator.h"
using namespace std;

void checkout(PaymentMode mode, double amount) {
    switch (mode) {
        case PaymentMode::PayPal:
            ServiceLocator::processPayment(handlePayPal, amount);
            break;

        case PaymentMode::GooglePay:
            ServiceLocator::processPayment(handleGooglePay, amount);
            break;

        case PaymentMode::CreditCard:
            ServiceLocator::processPayment(handleCreditCard, amount);
            break;

        default:
            cout << "Invalid payment mode selected!" << endl;
            break;
    }
}
