#include "String.h"
#include<iostream>

using namespace std;

String::String()
{
	size = 0;
	str = new char[size + 1];
	str[size] = '\0';
}

String::String(char* str, int size)
{
	this->size = size;
	this->str = new char[strlen(str) + 1];
	strcpy_s(this->str, strlen(str) + 1, str);
	counterObject++;
}

String::String(const String& str)
{
	this->size = str.size;
	this->str = new char[strlen(str.str) + 1];
	strcpy_s(this->str, strlen(str.str) + 1, str.str);
}

void String::setStr(const char* my_str)
{
	delete[] str;
	if (my_str != nullptr)
	{
		size = strlen(my_str);
		str = new char[size + 1];
		int i = 0;
		while (my_str[i] != '\0')
		{
			str[i] = my_str[i];
			i++;
		}
		str[size] = '\0';
	}
	else
	{
		str = nullptr;
	}
}

int String::getSize()
{
	/*while (size > 80)
		{
			break;
		}*/
	return size;
}

char* String::getStr()
{
	return str;
}

int String::getCounterObject()
{
	return counterObject;
}

int String::MyStrLen()
{
	delete[] str;
	if (this->str != nullptr)
	{
		size = strlen(this->str);
		str = new char[size + 1];
		int i = 0;
		while (this->str[i] != '\0')
		{
			str[i] = this->str[i];
			i++;
		}
		str[size] = '\0';
	}
	else
	{
		this->str = nullptr;
	}
	return this->size;
}

int String::MyChr(char c)
{
	delete[] str;
	if (this->str != nullptr)
	{
		for (int i = 0;i < size;i++)
		{
			if (c == str[i]) 
			{
				cout << "Looking element: " << str[i] << endl;
			}
			else 
			{
				cout << "-1" << endl;
			}
		}
	}
	else
	{
		this->str = nullptr;
	}
}

void String::MyDelChr(char c)
{
	delete[] str;
	if (this->str != nullptr)
	{
		for (int i = 0;i < size;i++)
		{
			if  (str[i] != c)
			{
				cout << str[i] << endl;
			}
		}
	}
	else
	{
		this->str = nullptr;
	}
}

String::~String()
{
	if (str != nullptr)
	{
		delete[] str;
	}
}
int String::counterObject = 0;