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
    virtual ~BankAccount();
    void deposit(double amount);
    virtual bool withdraw(double amount);
    //if you NEVER use it, and just have it to have other classes inherit it, you could:
    //virtual void withdraw(double amount)=0;
    //BankAccount would now be an Abstract Class. (an Object that cannot be created [kind of like a placeholder])

    virtual void display();
};


#endif //THE_BANK_BANKACCOUNT_H
