#pragma once
#ifndef _STRING_H_

#define _STRING_H_
#include <iostream>

class String {
private:
	int sz = 0;
	char* str = nullptr;

public:
	String(const char* str);
	~String();
	const char* c_str() const;

};



#endif
