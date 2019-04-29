#include <cstring>#include <iostream>#include "CString.h"
using namespace std;
namespace w1 {
	CString::CString(char* s) {
		if (s == NULL) {
			str[0] = '\0';
			return;
		}
		else {
			strncpy(str, s, MAX);
			str[MAX] = '\0';
		}
	
	}
	void CString::display(std::ostream& ostr) {
		ostr << str;
	}
	std::ostream& operator<<(std::ostream& ostr, CString cs) {
		static int cnt = 0;
		ostr << cnt++ << ": ";
		cs.display(ostr);
		return ostr;
	}
}