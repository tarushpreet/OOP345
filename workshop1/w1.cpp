
#include <iostream>
#include <cstring>
#include "CString.h"
#include "process.h"
#define MAX 3
int main(int args, char* argv[]) {
	for (int i = 0; i < args; i++) {
		cout << " " << argv[i];
	}
	cout << endl;
	for (int i = 1; i < args; i++) {
}