#include "Savings_account.h"



Savings_account::Savings_account(std::string name, double balance, double int_rate)
	:Account{ name, balance }, int_rate{ def_int_rate }{

}


bool Savings_account::withdraw(double amount) {
	if (balance > amount) {
		Account::withdraw(amount);
		return true;

	}
}
bool Savings_account::deposit(double amount) {
       	amount = amount + (amount * int_rate / 100);
		Account::deposit(amount);
		return true;

	
}

void Savings_account::print(std::ostream& os) const {
	os.precision(2);
	os << std::fixed;
	os << "[Savings_Account: " << name << ": " << balance << "]";

}