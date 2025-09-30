#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;
template <class T>

class clsMyQueue
{
	protected:
		clsDblLinkedList<T> _MyList;
public:
	void push(T item) {
		_MyList.InsertAtEnd(item);
	}
	void pop() {
		_MyList.DeleteFirstNode();
	}
	void Print() {
		_MyList.PrintList();
	}
	int Size() {
		return _MyList.Size();
	}
	bool IsEmpty() {
		return _MyList.IsEmpty();
	}
	void Clear() {
		_MyList.Clear();
	}
	T Front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(_MyList.Size() - 1);
	}
	T GetItem(int index) {
		return _MyList.GetItem(index);
	}
	void Reverse() {
		_MyList.Reverse();
	}
	void UpdateItem(int index, T newValue) {
		_MyList.UpdateItem(index, newValue);
	}
	void InserAfter(int index, T value) {
		_MyList.InsertAfter(index, value);
	}
	void InsertAtFront(T value) {
		_MyList.InsertAtBeginning(value);
	}
	void InsertAtBack(T value) {
		_MyList.InsertAtEnd(value);
	}





};

