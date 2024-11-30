#pragma once
class String
{
	char* str;
	int size;
	static int counterObject;
public:
	String();
	String(char* str, int size);
	String(const String& str);
	void setStr(const char* my_str);
	int getSize();
	char* getStr();
	static int getCounterObject();
	~String();
};

