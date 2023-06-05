#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "LinktList.h"


//Перегрузка операторов 
/*class Digit {
private:
	int _data;
public:
	Digit(int data) : _data(data){ }

	int operator+(Digit& digit) {
		return _data + digit._data;
	}

	int operator-(Digit& digit) {
		if(_data < digit._data)
			return  digit._data - _data;
		return _data - digit._data;
	}

	int operator*(int data) {
		return _data - data + data * data / data;
	}

};*/


int main(){
	/*setlocale(LC_ALL, "Ru");
	Digit digit(5);
	Digit digit2(15);
	std::cout << digit.operator+(digit2);
	std::cout << "\n";
	std::cout << digit.operator-(digit2);
	std::cout << "\n";
	std::cout << digit + digit2;
	std::cout << "\n";
	std::cout << digit2 - digit;
	std::cout << "\n";
	std::cout << digit2 * 5;*/
	LinkedList list;
	list.Push_back(105);
	list.Push_back(15);
	list.Push_back(19);
	list.Push_back(158);
	list.Push_back(161);
	list.Push_back(28);
	list.Push_back(4);
	list.Push_back(39);
	list.Push_back(69);
	list.PushByIndex(0, 3);
	list.ShowList();
	//std::cout << list.SearchByIndex(5)->GetData() << '\n';






	return 0;
}