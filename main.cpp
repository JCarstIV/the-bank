#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"

int main() {
    std::cout << "\n----------BankAccount Objects----------\n";
    //static instantiation (compile time)
    BankAccount customer1("Hakari", "7777777", 2103);
    customer1.display();
    customer1.withdraw(500);
    customer1.display();
    //dynamic instantiation (run time)

    BankAccount* customer2 = new BankAccount("Luigi", "2005002", 537100);
    customer2->display();
    delete customer2;

    std::cout << "\n----------CheckingAccount Objects----------\n";
    //static instantiation (compile time)
    CheckingAccount customer3("Spangtong", "1987891", -200, 300);
    customer3.display();


    return 0;
}