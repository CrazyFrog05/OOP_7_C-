#pragma once
#include<iostream>
#include "Head.h"
class LinkedList {
private:
	Node* _head;
	Node* _tail;
	int _numberOfElements;
public:
	LinkedList();
	void Push_back(int data);
	void ShowList();
	Node* SearchByIndex(int index);
	void PushByIndex(int data, int index);
};



