#include <iostream>
using namespace std;

int main()
{
	//Task1 Написать программу, копирующую последовательно элементы 
	// одного массива размером 10 элементов в 2 массива размером5 элементов каждый.Элементы первоначального массива можно
	// сгенерировать в произвольном диапазоне.
	srand(time(0));
	const int size = 10;
	const int sizeOf = 5;

	int arr3[size];

	int arr1[sizeOf];
	int arr2[sizeOf];

	for (int i = 0; i < size; i++)
	{
		arr3[i] = rand() % 21;
	}
	for (int i = 0; i < sizeOf; i++)
	{
		arr1[i] = arr3[i];
		arr2[i] = arr3[i + 5];
		cout << arr1[i] << endl << arr2[i] << endl;
	}
	//Task2 Напишите программу, которая выполняет поэлементную сумму двух массивов и результат заносит в третий массив.
	// Элементы массивов можно сгенерировать в произвольном диапазоне
	const int SIZE = 5;
	int array[SIZE];
	int array1[SIZE];
	int array2[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		array1[i] = 1 + rand() % 20;
		array2[i] = 1 + rand() % 20;
		array[i] = array1[i] + array2[i];
		cout << array[i] << endl;
	}

	//Task3 Пользователь вводит данные о своих расходах в долларах за неделю (каждый день). Написать программу, которая 
	// вычисляет:
	// ■ среднюю(за неделю) потраченную сумму;
	// ■ общую сумму, потраченную пользователем за неделю;
	// ■ количество дней и их названия(например, «вторник»), когда сумма расхода(в день) превысила 100 долларов.

	const int day = 7;
	string week[day] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int money[day];
	int average = 0;
	int sum = 0;
	for (int i = 0; i < day; i++)
	{
		cout << "Enter the amount of your expenses for every day in dollars and start by Monday: ";
		cin >> money[i];
	}
	for (int i = 0; i < day; i++)
	{
		sum += money[i];
		if (money[i] > 100) 
		{
			cout << "In this day your expense more than one hundred dollars: " << week[i] << endl;
		}
	}
	average = sum / day;
	cout << "Sum of your expenses = " << sum << endl;
	cout << "Average fo your expenses = " << average << endl;


	

}