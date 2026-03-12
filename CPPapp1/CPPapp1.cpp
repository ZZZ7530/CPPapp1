#include <iostream>
#include <iomanip>  // 必須引入此標頭檔
#include <string>

using namespace std;

int main() {
	//C++ string function demo
	//字串的初始方式
	string str0(10, '*');
	cout << "str0 = " << str0 << endl;


	string str1 = "Hello";
	auto str2 = "World";
	string str3 = str1 + " " + str2 + "!";
	string str3a = "\"Hello \\ World!\"";
	auto str3b = R"("Hello \ world!")";


	cout << "str1:" << str1 << endl;
	cout << "str2:" << str2 << endl;
	cout << "str3:" << str3 << endl;
	cout << "str3a:" << str3a << endl;
	cout << "str3b:" << str3b << endl;


	cout << "str3 capacity = " << str3.capacity() << endl;
	cout << "str3 length(size) = " << str3.length() << endl;
	cout << "str3 max_size = " << str3.max_size() << endl;
	cout << "str3 size =" << str3.size() << endl;
	cout << "str3 empty = " << str3.empty() << endl;
	cout << "str3[0] = " << str3[0] << endl;
	cout << "str3.at(0) = " << str3.at(0) << endl;
	cout << "str3.at(4) = " << str3.at(4) << endl;
	cout << "str3.front() = " << str3.front() << endl;
	cout << "str3.back() = " << str3.back() << endl;
	cout << "str3.substr(0, 5) = " << str3.substr(0, 5) << endl;
	cout << "str3.substr(7, 3) = " << str3.substr(7, 3) << endl;


	string str4;
	str4.append(str1);
	cout << "str4 = " << str4 << endl;
	str4.append(" ");
	str4 += str2;
	cout << "str4 = " << str4 << endl;
	str4.push_back('!');
	cout << "str4 = " << str4 << endl;


	cout << "str4.find(str1) = " << str4.find(str1) << endl;
	cout << "str4.find(\"World\", 3) = " << str4.find("World", 3) << endl;
	cout << "str4.find(\"World\", 7) = " << str4.find("World", 7) << endl;

	str4.insert(5, " C++");
	cout << "str4 = " << str4 << endl;
	str4.erase(str4.begin() + 6, str4.end() - 6);
	cout << "str4 = " << str4 << endl;
	str4.clear();
	cout << "str4 = " << str4 << endl;


	// C++ string conversion to number demo
	string str5 = "1234567890";
	int number1 = stoi(str5);
	cout << "number1 = " << number1 << endl;


	string str6 = "123.4567890";
	double number2 = stod(str6);
	cout << "number2 = " << number2 << endl;


	// C++ number conversion to string demo
	string str7 = to_string(number1);
	cout << "str7 = " << str7 << endl;


	string str8 = to_string(number2);
	cout << "str8 = " << str8 << endl;

	return 0; // 建議加上回傳值
}