#include"pch.h"
#include <vector>
#include<iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	// указание с каким типом данных будет работать вектор 
	vector <int> MyVector;
	// создание объекта типа итератора 
	vector<int>::iterator it;
	setlocale(LC_ALL, "Russian");
	int comand = -1;
	
	MyVector.reserve(10);
	//MyVector.capacity();

	cout << "Выберете команду" << endl;

	cout << "1.Генерация чисел" << endl;
	cout << "2.Вывести числа на экран" << endl;
	cout << "3.Добавить число" << endl;
	cout << "4.Сортировать по возрастанию числа" << endl;
	cout << "5.Удалить все числа" << endl;
	cout << "6.Заменить элементы" << endl;
	cout << "7.Подсчет элементов с заданным значением" << endl;
	cout << "8.Нахождение максимального элемента" << endl;
	cout << "9.Нахождение минимального элемента" << endl;
	cout << "10.Сортировать по убыванию числа" << endl;
	cout << "11.Вставка элемента" << endl;
	cout << "12.Удалить выбранный элемент" << endl;
	cout << "0.Выйти" << endl;
	cin >> comand;

	while (comand != 0)
	{
		//создание массива из чисел 
		if (comand == 1)
		{

			int n;
			cout << "Количество: ";
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				// добавление рандомного числа в конец 
				MyVector.push_back(rand());
			}
		}
		if (comand == 2)
		{
			cout << "Ваши числа: " << endl;
			
			for (int i = 0; i < MyVector.size(); i++)
			{
				cout << MyVector[i] << endl;
			}

			cout << MyVector.capacity() << endl;
		}
		if (comand == 3)
		{
			float a;
			cout << "Число: " << endl;
			cin >> a;
			// добавления числа в конец вектора
			MyVector.push_back(a);
		}
		if (comand == 4)
		{
			// команда сортировки массива(передаётся доступ к первому и последнему элементу)
			sort(MyVector.begin(), MyVector.end());
			cout << "Сортировка: " << endl;
			for (int i = 0; i < MyVector.size(); i++)
			{
				cout << MyVector[i] << endl;
			}
		}
		if (comand == 5)
		{
			//чистка вектора 
			MyVector.clear();
		}
		if (comand == 6)
		{
			int a, b;
			cout << "Какие элементы заменить(введите число): " << endl;
			cin >> a;
			cout << "На какие элементы заменить(введите число): " << endl;
			cin >> b;
			//замена переменных 
			replace(MyVector.begin(), MyVector.end(), a, b);
		}
		if (comand == 7)
		{
			int a;
			cout << "Число: " << endl;
			cin >> a;

			cout << count(MyVector.begin(), MyVector.end(), a) << endl;
		}
		if (comand == 8)
		{
			//нахождение итератора максимального элемента
			it = max_element(MyVector.begin(), MyVector.end());
			//вывод данных, на которые указывает данный итератор 
			cout << *it << endl;
		}
		if (comand == 9)
		{
			it = min_element(MyVector.begin(), MyVector.end());
			cout << *it << endl;
		}
		if (comand == 10)
		{
			sort(MyVector.rbegin(), MyVector.rend());
			cout << "Сортировка: " << endl;
			for (int i = 0; i < MyVector.size(); i++)
			{
				cout << MyVector[i] << endl;
			}
		}
		if (comand == 11)
		{
			int a;
			cout << "Новый элемент:" << endl;
			cin >> a;
			int b;
			cout << "Порядковый номер: " << endl;
			cin >> b;
			//добавление элемента по указанyому номеру 
			MyVector.insert(MyVector.begin() + b - 1, a);
		}
		if (comand == 12)
		{
			int a;
			cout << "Введите число, которое хотите удалить: " << endl;
			cin >> a;
			it = find(MyVector.begin(), MyVector.end(), a);
			//стереть элемент по указанyому номеру 
			MyVector.erase(it);
		}

		if (comand == 13)
		{
			it = MyVector.begin();
			cout << *it<<endl;

		}
		if (comand == 14)
		{
			it = MyVector.end()-1;

			cout << *it << endl;

		}
		cout << "1.Генерация чисел" << endl;
		cout << "2.Вывести числа на экран" << endl;
		cout << "3.Добавить число" << endl;
		cout << "4.Сортировать по возрастанию числа" << endl;
		cout << "5.Удалить все числа" << endl;
		cout << "6.Заменить элементы" << endl;
		cout << "7.Подсчет элементов с заданным значением" << endl;
		cout << "8.Нахождение максимального элемента" << endl;
		cout << "9.Нахождение минимального элемента" << endl;
		cout << "10.Сортировать по убыванию числа" << endl;
		cout << "11.Вставка элемента" << endl;
		cout << "12.Удалить выбранный элемент" << endl;
		cout << "0.Выйти" << endl;
		cin >> comand;
	}
	system("pause");
	return 0;
}

