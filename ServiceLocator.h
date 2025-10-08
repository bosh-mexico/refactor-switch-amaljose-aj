#ifndef SERVICELOCATOR_H
#define SERVICELOCATOR_H

#include "handlers.h"

class ServiceLocator {
public:
    static void processPayment(void (*handler)(double), double amount) {
        handler(amount);
    }
};

#endif
