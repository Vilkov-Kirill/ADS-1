// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i < value / 2 + 1; i++) {
        if (value % i == 0) { return false; }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    int pr = 0;
    for (int i = 2; i <= n; i++) {
        if (checkPrime(i)) { pr++; }
    }
    return pr;
}

uint64_t nextPrime(uint64_t value) {
    value++;
    while (true) {
        if (checkPrime(value)) { return value; }
        value++;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    int s = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) { s += i; }
    }
    return s;
}
