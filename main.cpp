#include <iostream>
#include "BankAccount.h"

int main() {

    std::cout << "\n\n\n";

    BankAccount customer1("Spangtong", "1987891", -3);
    customer1.display();

    return 0;
}