#include "String.h"
#include <iostream>
#include <cstring>
#include <algorithm>


//Constructors

String::String() = default;

//copy whole buffer
String::String(const char* s) {
	for (; *(s + sz) != '\0'; ++sz);
	str = new char[sz + 1];
	std::memcpy(str, s, sz + 1);
}

//Copy first n characters from buffer
// or creates empty string-object
String(const char* s, size_t n){
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		for (; *(s + sz) != '\0' && sz < n; ++sz);
		str = new char[sz + 1];
		std::memcpy(str, s, sz + 1);		
	}
}

//Fills the string-object with n consequtive copies of character c
String(size_t n, char c): sz(n) {
	str = new char[sz + 1];
	std::memset(str, c, sz);
	str[sz] = '\0';
}

//Create the string-object with the characters from initializer list
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

String(const String& s, size_t pos, size_t len) {
	if (pos + len <= s.sz) {
		sz = len;
		str = new char[len + 1];
		std::memcpy(str, s.str, len);
		str[sz + 1] = '\0';
	} else {
		str = new char[1];
		*str = '\0';
	}
}

//Destructor
String::~String() {
	delete[] str;
}


//Methods
const char* String::c_str() const {
	return str;
}

const size_t String::len() const {
	return sz;
}

//Assgnment operator
String& String::operator=(String s) {
	swap(s, *this);
}

void String::swap(String& s1, String& s2) {
	std::swap(s1.str s2.str);
	std::swap(s1.sz s2.sz);
}


//Operators

