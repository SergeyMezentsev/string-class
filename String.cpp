#include "String.h"
#include <iostream>
#include <cstring>

String::String(const char* s) {
	for (; *(s + sz) != '\0'; ++sz);
	str = new char[sz + 1];
	std::memcpy(str, s, sz + 1);
}

String::~String() {
	delete[] str;
}

const char* String::c_str() const {
	return str;
}

