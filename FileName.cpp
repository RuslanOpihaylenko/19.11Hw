#include<iostream>
using namespace std;
class String
{
	char* str;
	int size;
public:
	String()
	{
		size = 0;
		str = new char[size + 1];
		str[size] = '\0';
	}
	void setStr(const char* my_str)
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
	int getSize()
	{
		/*while (size > 80)
		{
			break;
		}*/
		return size;
	}
	char* getStr()
	{
		return str;
	}
	~String()
	{
		if (str != nullptr)
		{
			delete[] str;
		}
	}
};
int main()
{
	String str;
	str.setStr("Hellow");
	cout << str.getStr() << endl;
	cout << str.getSize() << endl;
}