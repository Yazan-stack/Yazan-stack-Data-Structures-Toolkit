#pragma once
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
		int _Size = 0;
		T* _TempArray = nullptr;
public:
	T* OriginalArry = nullptr;
	
	clsDynamicArray(int Size=0) {
		
		if (Size < 0)
			Size = 0;
		 _Size = Size;
		 OriginalArry = new T[_Size];
	}

	~clsDynamicArray() {
		if (OriginalArry != nullptr)
			delete[] OriginalArry;
	}

	bool SetItem(int index, T value) {
		if (index < 0 || index >= _Size) {
			return;
		}
		OriginalArry[index] = value;
	}
	T GetItem(int index) {
		if (index < 0 || index >= _Size) {
			throw exception("Index out of range");
		}
		return OriginalArry[index];
	}
	
	int Size() {
		return _Size;
	}
	bool IsEmpty() {
		return (_Size == 0);
	}
	void PrintList() {
		for (int i = 0; i < _Size; i++) {
			cout << OriginalArry[i] << " ";
		}
		cout << "\n";
	}

	void Resize(int NewSize)
	{

		if (NewSize < 0)
		{
			NewSize = 0;
		};

		_TempArray = new T[NewSize];

		//limit the original size to the new size if it is less.
		if (NewSize < _Size)
			_Size = NewSize;

		//copy all data from original array until the size
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}
	void Reverse()
	{
		_TempArray = new T[_Size];
		int j = 0;
		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[j] = OriginalArray[i];
			j++;
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	
	void Clear()
	{
		delete[] OriginalArray;
		OriginalArray = nullptr;
		_TempArray = new T[0];
		OriginalArry = _TempArray;
		_Size = 0;
	}
	T Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == value)
				return i;
		}
		return -1;
	}
	
	void DeleteItemAt(int index)
	{
		if (index < 0 || index >= _Size)
		{
			return;
		};

		_TempArray = new T[_Size - 1];
		int j = 0;
		for (int i = 0; i < _Size; i++)
		{
			if (i == index)
				continue;
			_TempArray[j] = OriginalArray[i];
			j++;
		}
		_Size--;
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	void DeleteItem(T value)
	{
		int index = Find(value);
		if (index != -1)
			DeleteItemAt(index);
	}
	void DeleteFirstItem()
	{

		DeleteItemAt(0);

	}
	void DeleteLastItem()
	{

		DeleteItemAt(_Size - 1);
	}
	bool InsertAt(int index, T value)
	{
		if (index < 0 || index > _Size)
		{
			return 0;
		};
		_TempArray = new T[_Size + 1];
		int j = 0;
		for (int i = 0; i < _Size + 1; i++)
		{
			if (i == index)
			{
				_TempArray[i] = value;
				continue;
			};
			_TempArray[i] = OriginalArray[j];
			j++;
		};
		_Size++;
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return 1;
	}
	void InsertAtBegging(T value)
	{
		InsertAt(0, value);
	};
	void InsertBefore(int index, T value)
	{
		if(index <= 0)
			index = 1;
		InsertAt(index-1, value);
	};
	void InsertAfter(int index, T value)
	{
		if (index >= _Size )
			index = _Size - 1;
		InsertAt(index + 1, value);
	};
	void InsertAtEnd(T value)
	{
		InsertAt(_Size, value);
	};
	

};

