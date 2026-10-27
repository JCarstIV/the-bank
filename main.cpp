#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"

int main() {
    std::cout << "\n----------BankAccount Objects----------\n";
    //static instantiation (compile time)
    BankAccount customer1("Kinji Hakari", "7777777", 2103);
    customer1.display();
    customer1.withdraw(500);
    customer1.display();
    //dynamic instantiation (run time)
    BankAccount* customer2 = new BankAccount("Princess Daisy", "2005002", 537100);
    customer2->display();

    std::cout << "\n----------CheckingAccount Objects----------\n";
    //static instantiation (compile time)
    CheckingAccount customer3("Spamton G. Spamton", "1987891", -50, 300);
    customer3.display();
    customer3.withdraw(200);
    customer3.display();
    customer3.withdraw(50);
    customer3.display();

    BankAccount* customer4 = new CheckingAccount("Itadori Yuji", "2181031", 3210, 200);
    customer4->display();
    customer4->withdraw(3300);
    customer4->display();


    std::cout << "\n----------Destruction of Objects----------\n";
    delete customer2;
    delete customer4;
    return 0;
}