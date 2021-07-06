#include "Account.h"
#include <iostream>

Account::Account(std::string name, double balance)
	:name{ name }, balance{balance}{

}


bool Account::withdraw(double amount) {
	if (balance > amount) {
		balance -= amount;

		return true;
	}
	else {
		std::cout << "Not enough funds to make this withdrawal" << std::endl;
		return false;

	}
	}

bool Account::deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		return true;
	}
	else {
		return false;
	}
}

void Account::print(std::ostream& os) const {
	os.precision(2);
	os << std::fixed;
	os << "[Account: " << name << ": " << balance << "]";
}
