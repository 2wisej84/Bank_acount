#pragma once
#include "Savings_account.h"

class Trust_account : public Savings_account {

private:
	static constexpr double def_bonus = 100;
	static constexpr int def_count = 2;
	static constexpr double def_int_rate = 5.00;

protected:
	double bonus;
	int count;
public:
	Trust_account(std::string name, double balance, double int_rate = def_int_rate, double bonus = def_bonus, int count = def_count );
	bool withdraw(double amount) override;
	bool deposit(double amount) override;
	void print(std::ostream& os) const;
	virtual ~Trust_account() = default;
};