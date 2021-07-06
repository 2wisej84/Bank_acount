#pragma once
#include "Account.h"
#include <iostream>

class Savings_account: public Account
{
private:
	static constexpr double def_int_rate = 3.0;
protected:
	double int_rate;
public: 

	Savings_account(std::string name, double balance, double int_rate = def_int_rate);
	bool withdraw(double amount) override;
	bool deposit(double amount) override;
	void print(std::ostream& os) const;
	virtual ~Savings_account() = default;
};

