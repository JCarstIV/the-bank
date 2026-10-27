//
// Created by da0ma on 10/15/2026.
//

#ifndef THE_BANK_BANKACCOUNT_H
#define THE_BANK_BANKACCOUNT_H
#include <string>

class BankAccount {
private:
    std::string m_accHolder;
    std::string m_accNum;
protected:
    double m_balance;
public:
    BankAccount(const std::string &accHolder,const std::string &accNum,double balance);
    ~BankAccount();
    void deposit(double amount);
    bool withdraw(double amount);
    virtual void display();
};


#endif //THE_BANK_BANKACCOUNT_H
