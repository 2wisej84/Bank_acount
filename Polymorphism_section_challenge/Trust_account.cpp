#include "Trust_account.h"
#include <iostream> 



Trust_account::Trust_account(std::string name, double balance, double int_rate, double bonus, int count)
	:Savings_account{ name, balance, int_rate }, bonus{ def_bonus }, count {def_count}{

}



bool Trust_account::deposit(double amount) {
	if (amount > 5000.00) {
		std::cout << "You will recieve a bonus of " << char(156) << bonus << " for this deposit" << std::endl;
		amount += bonus;
		Savings_account::deposit(amount);
		return true;
	}
}

bool Trust_account::withdraw(double amount) {
	if (count > 0) {
		Savings_account::withdraw(amount);
		count--;
	}
	else {
		std::cout << "You have exceeded your yearly withdrawal count" << std::endl;
		return false;
	}
}

void Trust_account::print(std::ostream& os) const {
	os.precision(2);
	os << std::fixed;
	os << "[Trust_Account: " << name << ": " << balance << "]\n" <<"You have " << count << " Withdrawals remaining";
	

}