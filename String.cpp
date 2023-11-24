#include "String.h"
#include <iostream>
#include <cstring>
#include <algorithm>


//Constructors

String(){}

String::String(const char* s) {
	for (; *(s + sz) != '\0'; ++sz);
	str = new char[sz + 1];
	std::memcpy(str, s, sz + 1);
}

String(const char* s, size_t n): sz(n) {
	str = new char[sz + 1];
	std::memcpy(str, s, sz);
	str[sz] = '\0';
}

String(size_t n, char c): sz(n) {
	str = new char[sz + 1];
	std::memset(str, c, sz);
	str[sz] = '\0';
}

String(std::initializer_list<char> il): sz(il.size()) {
	str = new char[sz + 1];
	std::copy(il.begin(), il.end(), str);
	str[sz] = '\0';
}
	

//Copy constructor

String(const String& s): sz(s.sz) {
	str = new char[sz + 1];
	std::memcpy(str, s.str, sz + 1);
}

String(const String&, size_t pos, size_t len) {
	
}








//Destructor
String::~String() {
	delete[] str;
}




//Methods
const char* String::c_str() const {
	return str;
}

