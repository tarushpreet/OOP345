
#pragma once
#include <iostream>
namespace w1 {
	const int MAX = 3;
	class CString {
	private:
	public:
		CString(char* s);
		void display(std::ostream& ostr);
	};
	std::ostream& operator<<(std::ostream& ostr, CString cs);
}
