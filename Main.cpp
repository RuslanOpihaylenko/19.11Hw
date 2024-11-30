#include<iostream>
#include"String.h"
#include"String.cpp"

using namespace std;
	
int main()
{
	String str;
	str.setStr("Hellow");
	cout << str.getStr() << endl;
	cout << str.getSize() << endl;
}