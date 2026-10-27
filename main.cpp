#include <iostream>
#include "BankAccount.h"

int main() {
    std::cout << "\n----------BankAccount Objects----------\n";
    //static instantiation (compile time)
    BankAccount customer1("Spangtong", "1987891", -3);
    customer1.display();
    customer1.withdraw(500);
    customer1.display();
    //dynamic instantiation (run time)

    BankAccount* customer2 = new BankAccount("Luigi", "2005002", 537100);
    customer2->display();
    delete customer2;

    std::cout << "\n----------CheckingAccount Objects----------\n";


    return 0;
}