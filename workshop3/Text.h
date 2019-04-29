
#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
namespace w3 {
	class Text {
	private:
		int fCount;
		string* strs;
	public:
		Text();
		Text(const string fileName);
		Text(const Text& other);
		Text& operator=(const Text& other);
		Text(Text&& other);
		Text&& operator=(Text&& other);
		~Text();
		size_t size() const;
	};
}
