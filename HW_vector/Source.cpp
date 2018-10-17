#include<iostream>
using namespace std;
class vector_
{
	int* arr;
	int size = 0;
public:
	vector_()
	{
		arr = nullptr;
	}
	void pushBack(int number)
	{
		int* tmp = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			tmp[i] = arr[i];
		}
		tmp[size] = number;
		delete[]arr;
		arr = tmp;
		size++;
	}
	vector_(const vector_ &obj)
	{
		if (obj.size == 0)
		{
			this->arr = nullptr;
			this->size = 0;
			return;
		}
		this->arr = new int[obj.size];
		for (int i = 0; i < obj.size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
		this->size = obj.size;
	}
	~vector_()
	{
		delete[] arr;
	}
	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
void main()
{
	vector_ v;
	vector_ v1 = v;
	v1.pushBack(5);
	v1.print();
	system("pause");
}