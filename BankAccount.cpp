//
// Created by da0ma on 10/15/2026.
//

#include <iostream>
#include <stdexcept>
#include "BankAccount.h"

BankAccount::BankAccount(const std::string &accHolder,const std::string &accNum,double balance) {
    m_accHolder = accHolder;
    m_accNum = accNum;
    m_balance = balance;
}

BankAccount::~BankAccount() {
    // cleanup of objects
    std::cout << "\nBankAccount Object destroyed";
}

void BankAccount::deposit(double amount) {
    if (0 < amount) {
        m_balance += amount;
    } else {
        //throw std::invalid_argument("\n");
        std::cout << "Not a valid amount.\n";
    }
}

bool BankAccount::withdraw(double amount) {
    if (0 < amount && amount < m_balance - 5.0) {
        m_balance -= amount;
        return true;
    } else {
        //throw std::invalid_argument("\n");
        std::cout << "Not a valid amount, not enough funds.\n";
        return false;
    }
}

void BankAccount::display() {
    std::cout << std::endl;
    std::cout << "Client Name: " << m_accHolder << std::endl;
    std::cout << "Account Number: " << m_accNum << std::endl;

    if (m_balance > 0) {
        std::cout << "Current Balance: $" << m_balance << std::endl;
    } else if (m_balance < 0) {
        std::cout << "Current Balance: $" << m_balance << " owed"<< std::endl;
    } else {
        std::cout << "error";
    }
}
///