#pragma once
#include <iostream>
#include "I_printable.h"

class Account : public I_printable {

protected:
	std::string name;
	double balance;
public:
	Account(std::string name, double balance);
	virtual bool withdraw(double amount) = 0;
	virtual bool deposit(double amount) = 0;
	virtual void print(std::ostream& os) const  override;
	virtual ~Account() = default; 

};