#pragma once
#include "Account.h"


class Current_account : public Account {

protected:
	double withdraw_fee;
public:
	Current_account(std::string name, double balance, double withdraw_fee);
	bool withdraw(double amount) override;
	bool deposit(double amount) override;
	void print(std::ostream& os) const;
	virtual ~Current_account() = default;
	
};
