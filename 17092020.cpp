// контейнери 
#include <iostream>
using namespace std;

void test() {

	string pib = "Ivanenko Ivan Ivonovych";
	//cout << pib.size() << "\t" << pib.length() << endl; //23 символи // char - 1 байт
	//cout << pib.max_size() << endl;
	for (int i = 0; i < 100; i++)
	{
		pib += "Hello";
		cout << pib.capacity() << ' ' << pib.size() << endl;
	}
	pib = " ";
	cout << pib.capacity() << ' ' << pib.size() << endl;
	const char* p = pib.data();
	cout << (p + 2);
}
void test1() {
	string pib = "Ivanenko Ivan Ivonovych";
	//pib.clear();
	pib.shrink_to_fit();
}
void test2() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	pib[2] = 'e';
	cout << pib << endl;
	pib.at(2) = 'A';
	cout << pib << endl;
	pib.append("Hello"); // додає в кінець строки
	cout << pib << endl;
	pib.append(a, 2, 4); // беремо з а, з 2гої позиції 4 символи
	cout << pib << endl;
	pib.append(20, '*'); // додає в кінець 20 символів *
	cout << pib << endl;
	pib.push_back('A'); // додає в кінець 1 символ 
	cout << pib << endl;
	pib.assign("Hello"); // затирає pib
	cout << pib << endl;
}
void test3() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	a.assign(pib, 9); // вирізає з 9 символів з піб
	cout << a << endl;
	a.assign(pib, 9, 4); //починаючи з9го символа беремо 4 символи
	cout << a << endl;
	a.assign(20, '-'); //затирає 20тьма тире
	cout << a << endl;
}
void test4() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	pib.insert(9, a); // в 9ту позицію вставляє стрінг а
	cout << pib << endl;
	pib.insert(3, a, 2);
	cout << pib << endl;
}
void test5() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	pib.erase(9, 5); // з 9тої вирізає 5 символів
	cout << pib << endl;
}
void test6() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	pib.replace(9, 4, "Petro"); // з 9тої позіції 4 символи на слово петро
	cout << pib << endl;
}
void test7() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	string k = pib.substr(9, 4); // вирізали з 9тої позіції 4 символи і присвоїли іншому стрінгу
	cout << k << endl;
	//string k = pib.substr(9); // вирізали до 9тої позіції символи і присвоїли іншому стрінгу
	cout << k << endl;
}
void test8() {
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	int q = pib.find("novy"); // показує позицію
	cout << q << endl;
	int qq = pib.find("Ivan", 5); // шукає з 5тої позиції і повертає +4 позиції після 5тої і маємо 9 позицію
	cout << qq << endl;
}
void test9() { // знайти позицію літери
	string a = "ITStep";
	string pib = "Ivanenko Ivan Ivonovych";
	string f = "h";
	int p = pib.find(f);
	while (p >= 0)
	{
		cout << "p = " << p << endl;
		p = pib.find(f, p + 1);
	}
}
string ShortName(string pib) { // робимо піб
	string name = "";
	int s1p = pib.find_first_not_of(" "); // шукаємо перший символ який не пробіл - 3тій символ
	int s1k = pib.find(" ", s1p); // перший пробіл після 1 слова - 9 символ
	name.assign(pib, s1p, s1k - s1p); // знайшли пріщвище

	int s2p = pib.find_first_not_of(" ", s1k); // перша літера імені
	name = name + " " + pib[s2p] + '.';

	int s3p = pib.find_first_not_of(" ", pib.find(" ", s2p)); // знайшли по батькові
	if (s3p > 0)
		name = name + pib[s3p] + '.';
	return name;
}
void IfPalindrom() {
	string s = "Hello";
	for (char a : s)
		cout << a;
}
void IfPalindrom2() { // те саме що і вище
	string s = "Hello";
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it;
}

int main()
{
	//test();
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();

	/*string pib = "   Ivanenko    Petro       ";
	cout << ShortName(pib);*/

	//IfPalindrom();
	//IfPalindrom2();

}