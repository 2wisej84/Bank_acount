#include "I_printable.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const I_printable& obj) {
	obj.print(os);
	return os;

}

