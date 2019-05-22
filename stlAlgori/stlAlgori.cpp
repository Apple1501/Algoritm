#include"pch.h"
// хранить только уникальные элементы 
#include <set>
#include<iostream>

/*#include <algorithm>*/
#include <iterator>
using namespace std;

int main()
{
	// указание с каким типом данных будет работать вектор 
	set <int> MySet;
	// создание объекта типа итератора 
	set<int>::iterator it;
	setlocale(LC_ALL, "Russian");
	int comand = -1;
	
	//MyVector.reserve(10);
	//MyVector.capacity();

	cout << "Выберете команду" << endl;

	cout << "1.Генерация чисел" << endl;
	cout << "2.Вывести числа на экран" << endl;
	cout << "3.Добавить число" << endl;
	cout << "4.Удалить все числа" << endl;
	cout << "5.Нахождение элемента" << endl;
	cout << "6.Удалить выбранный элемент" << endl;
	cout << "0.Выйти" << endl;
	cin >> comand;

	while (comand != 0)
	{
		//создание массива из чисел 
		if (comand == 1)
		{
			// пользователь водит границы 
			int n;
			
			cout << "Количество: ";
			cin >> n;
			cout << "Введите границы рандома" << endl;
			int min, max;
			cout << "Введите минмальное значение" << endl;
			cin >> min;
			cout << "Введите максимальное значение" << endl;
			cin >> max;
				for (int i = 0; i < n; i++)
				{
					// добавление рандомного числа 
					MySet.insert(rand() % (max - min+1)+min);
				}
			
				
							
					   
		}
		if (comand == 2)
		{
			cout << "Ваши числа: " << endl;
			
			for (auto &item:MySet)
			{
				cout << item << endl;
			}

		}
		if (comand == 3)
		{
			int a;
			cout << "Число: " << endl;
			cin >> a;
			MySet.insert(a);
		}
		
		if (comand == 4)
		{
			//чистка set
			MySet.clear();
		}
		
		//поиск числа 
		if (comand == 5)
		{
			int k;
			cout << "Введите число " << endl;
			cin >> k;
			it = MySet.find(k);
			if (it != MySet.end())
			{
				cout << "Число  " << k << " найдено"<<endl;
						
			}

			else
			{
				cout << "Число  " << k << " не найдено"<<endl;

			}
			
		}
		
		if (comand == 6)
		{
			int a;
			cout << "Введите число, которое хотите удалить: " << endl;
			cin >> a;
			
			MySet.erase(a);
		}
			
		cout << "1.Генерация чисел" << endl;
		cout << "2.Вывести числа на экран" << endl;
		cout << "3.Добавить число" << endl;
		cout << "4.Удалить все числа" << endl;
		cout << "5.Нахождение элемента" << endl;
		cout << "6.Удалить выбранный элемент" << endl;
		cout << "0.Выйти" << endl;
		cin >> comand;
	}
	system("pause");
	return 0;
}

