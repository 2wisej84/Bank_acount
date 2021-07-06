#include "I_printable.h"
#include "Account.h"
#include "Current_account.h"
#include "Savings_account.h"
#include "Trust_account.h"
#include <iostream>
#include <vector>
using namespace std;


int main() {

	//create new accounts and use their methods
	cout << "Current Account ========" << endl;
	Account* current = new Current_account{ "Current Account 1", 1000.00, 2.00 };
	current->withdraw(10.00);
	current->deposit(5.00);
	cout << *current << endl << endl;

	cout << "Savings Account ========" << endl;
	Account* savings = new Savings_account{ "Savings account 1", 2000.00 };
	savings->withdraw(10.00);
	savings->deposit(10.00);
	cout<< *savings << endl << endl;


	cout << "Trust Account ========" << endl;
	Account* trust = new Trust_account{"Trust account 1", 10000.00};
	trust->deposit(6000.00);
	trust->withdraw(10.00);
	cout << *trust << endl << endl;

	trust->withdraw(10.00);
	cout << *trust << endl << endl;

	trust->withdraw(10.00);
	cout << *trust << endl << endl;





	cout << "\n\nSmart pointers" << endl;


	cout << "\nUnique pointers" << endl;
	std::unique_ptr<Account> Unique1 = std::make_unique<Current_account>("First Account", 500.00, 2.00);
	std::cout << *Unique1 << std::endl;
	std::cout << Unique1.get() << std::endl; //get address
	//Unique1.reset(); //p1 is now nullptr
	


	std::vector<std::unique_ptr<Account>> accounts;
    //illegal to copy unique pointer so have to initialize them in the vector 
	accounts.push_back(make_unique<Current_account>("Current Account", 800.00, 2.00));
	accounts.push_back(make_unique<Savings_account>("Savings Account", 9000));
	accounts.push_back(make_unique<Trust_account>("Trust account 1", 10000.00));

	for (const auto &ptr : accounts) {
		cout << *ptr << endl;
	}

	cout << "\n\nSmart pointers" << endl;
	std::shared_ptr<Account>  shared1 = std::make_shared<Current_account>("Shared current Account", 500.00, 2.00);
	std::shared_ptr<Account>  shared2 = std::make_shared<Savings_account>("Shared Savings Account", 500.00);
	std::shared_ptr<Account>  shared3 = std::make_shared<Trust_account>("Shared Trust Account", 500.00);

	std::vector<std::shared_ptr<Account>> accounts1;
	//make copy of shared pointer objects, so use count will be 2 for each
	accounts1.push_back(shared1);
	accounts1.push_back(shared2);
	accounts1.push_back(shared3);
	cout << "Shared 1 use count: " << shared1.use_count() << endl;
	cout << "Shared 1 use count: " << shared2.use_count() << endl;
	cout << "Shared 1 use count: " << shared3.use_count() << endl;
	 
	cout << "\nDisplay vector" << endl;


	
		
}