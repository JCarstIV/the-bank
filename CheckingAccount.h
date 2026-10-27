//
// Created by da0ma on 10/27/2026.
//

#ifndef THE_BANK_CHECKINGACCOUNT_H
#define THE_BANK_CHECKINGACCOUNT_H

#include <iostream>
#include <ostream>
#include "BankAccount.h"

class CheckingAccount:public BankAccount {
private:
    double m_overdraftLimit;
public:

    CheckingAccount(const std::string &accHolder,const std::string &accNum,double amount, const double balance, double overdraftLimit):BankAccount(accHolder,accNum,amount,balance) {
        m_overdraftLimit = overdraftLimit;
    }
    ~CheckingAccount() {

    }
    bool withdraw(double amount) {
        if (amount <= m_balance + m_overdraftLimit) {
            if (amount > m_balance) {
                m_overdraftLimit += amount;
            }
            m_balance -= amount;
            return true;
        } else {
            return false;
        }
    }
};












#endif //THE_BANK_CHECKINGACCOUNT_H
