#include<iostream>
#include"String.h"
#include"String.cpp"
/*Задание 1
Разработать класс MyString, который в дальнейшем будет использоваться для работы 
со строками. Класс должен содержать:
конструктор по умолчанию, позволяющий создать строку длиной 80 символов;
конструктор, позволяющий создавать строку произвольного размера;
конструктор, который создаёт строку и инициализирует её строкой, полученной от пользователя.
деструктор;
методы для ввода строк с клавиатуры и вывода строк на экран.
void MyStrcpy(MyString & obj);// копирование строк
bool MyStrStr(const char * str);// поиск подстроки в строке
2.int MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
1.int MyStrLen();// возвращает длину строки
void MyStrCat(MyString& b); // объединение строк
3.void MyDelChr(char c); // удаляет указанный символ
int MyStrCmp(MyString &b); // сравнение строк 
                                  -1 – первая строка меньше чем вторая
                                   1 – первая больше чем вторая
                                   0 – строки равны!
Статическое поле сохраняет кол-во созданных объектов.
Поля класса :
class MyString
{
char * str; // указатель на строку
int length; // длина строки
public:
// методы класса
};
 
 
доступно контекстное меню

*/
using namespace std;
	
int main()
{
	String str;
	const int N = 10;
	char str[N] = {"l"};
	str.setStr("Hellow");
	cout << str.getStr() << endl;
	cout << str.getSize() << endl;
	cout << str.MyStrLen() << endl;
	cout << str.MyChr(str) << endl;
	str.MyDelChr(str);
}