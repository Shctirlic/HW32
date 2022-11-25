#include <iostream>
#include <string>
using namespace std;

template<typename T>
void fun1(T**& arr, int row, int col)
{
	arr = new T * [row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<typename T>
void print_arr(T** arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void fun2(string& str, char ch1, char ch2)
{
	for (int i = 0; str[i]; ++i)
		if (str[i] == ch1) str[i] = ch2;
}



struct route
{
	int    route_num;
	string type;
	string start_name;
	string finish_name;
	float  price;
};

void   printf_route(const route& obj)
{
	cout << obj.route_num << " " << obj.type << " " << obj.start_name << " " << obj.finish_name << " " << obj.price << endl;
}
float  fare(route obj, int n)
{
	return obj.price * n;
}
int main()
{
	//задание 1
	/*
		int** arr1 = nullptr;
	int   row1 = 3, col1 = 5;

	fun1(arr1, row1, col1);
	print_arr(arr1, row1, col1);


	float** arr2 = nullptr;
	int   row2 = 3, col2 = 5;

	fun1(arr2, row2, col2);
	print_arr(arr2, row2, col2);



	for (int i = 0; i < row1; i++)
	{
		delete[] arr1[i];
	}
	delete[] arr1;

	for (int i = 0; i < row2; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
	*/

	//задание 2
	/*
	string str = "aacaa bbb b  b 123  1 1 c c. cc. 123ccc xx";

	fun2(str, 'c', 'W');

	cout << str << endl;
	*/


	//задание 3
	{
		route r1 = { 12, "bus",        "a", "b", 10 };
		route r2 = { 14, "tram",       "a", "b", 20 };
		route r3 = { 10, "trolleybus", "c", "d", 30 };

		printf_route(r1);
		cout << fare(r1, 3) << endl;
	}

}

