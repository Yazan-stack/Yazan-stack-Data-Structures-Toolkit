#pragma once
#include "clsDynamicArray.h"
using namespace std;
template <class T>
class clsMyQueueArr
{
protected:
		clsDynamicArray<T> _MyList;
		
public:
	void Push(T item) {
		_MyList.InsertAtEnd(item);
		
	}
	void Pop() {
		if (!_MyList.IsEmpty())
			_MyList.DeleteFirstItem();
	}
	void Print() {
		_MyList.PrintList();
	}
	int size() {
		return _MyList.Size();
	}
	T Front() {
		if (_MyList.IsEmpty())
			throw exception("Queue is empty");
		return _MyList.GetItem(0);
	}
	T Back() {
		if (_MyList.IsEmpty())
			throw exception("Queue is empty");
		return _MyList.GetItem(_MyList.Size() - 1);
	}
	bool IsEmpty() {
		return _MyList.IsEmpty();
	}
	void Reverse() {
		_MyList.Reverse();
	}
	void UpdateAt(int index, T value) {
		_MyList.SetItem(index, value);
	}
	void InsertAfter(int index, T value) {
		_MyList.InsertAfter(index, value);
	}
	void InsertAtFront(T value) {
		_MyList.InsertAtBegging(value);
	}
	void InsertAtBack(T value) {
		_MyList.InsertAtEnd(value);
	}
	void Clear() {
		_MyList.Clear();
	}

};

