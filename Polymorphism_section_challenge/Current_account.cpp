#include "Current_account.h"
#include <iostream>

Current_account::Current_account(std::string name, double balance, double withdraw_fee)
	:Account {name,balance }, withdraw_fee{ withdraw_fee }{

}

bool Current_account::withdraw(double amount) {
    amount += withdraw_fee;
    return Account::withdraw(amount);
}

bool Current_account::deposit(double amount) {
    return Account::deposit(amount);
}

void Current_account::print(std::ostream& os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Checking_Account: " << name << ": " << balance << "]";

}

