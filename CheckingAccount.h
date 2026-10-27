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
    CheckingAccount(const std::string &accHolder,const std::string &accNum, const double balance, double overdraftLimit):BankAccount(accHolder,accNum,balance) {
        m_overdraftLimit = overdraftLimit;
    }
    ~CheckingAccount() {
        // cleanup of objects
        std::cout << "\nCheckingAccount Object deconstructed\n";
    }
    bool withdraw(double amount) { //override base class withdraw method
        if (amount <= m_balance + m_overdraftLimit) {
            if (amount > m_balance) {
                m_overdraftLimit += (m_balance - amount);
            }
            m_balance -= amount;
            return true;
        }
        if (m_balance < 0 and amount <= m_overdraftLimit) {
            m_overdraftLimit -= amount;
            return true;
        }
        return false;
    }
    void display() {
        BankAccount::display();
        std::cout << "Overdraft Limit: $" << m_overdraftLimit << std::endl;
    }
};
#endif //THE_BANK_CHECKINGACCOUNT_H
