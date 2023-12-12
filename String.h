#pragma once
#ifndef _STRING_H_

#define _STRING_H_
#include <iostream>

class String {
private:
	size_t sz = 0;
	char* str = nullptr;

public:
	// Constructors
	String();
	String(const char* str);
	String(const char*, size_t);
	String(size_t n, char c);
	String(std::initializer_list<char> il);


	//Copy constructor
	String(const String&);
	String(const String&, size_t pos, size_t len);



	//Assignment operator
	// Copy & swap
	String& operator=(String s);
	void swap(String&);


	//Destructor
	~String();


	//Methods
	const char* c_str() const;
	const size_t len() const;

};



#endif
