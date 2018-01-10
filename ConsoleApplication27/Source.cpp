#include <iostream>

#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <math.h>
#include <time.h>
using namespace std;
#define sizeArr 20
void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	srand(time(NULL));
	cout << "Ведите номер задания  : ";
	cin >> nz;

	switch (nz)
	{

	case 1:
	{
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Do sortirivki" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		cout << endl;
		cout << "Posle sortirivki" << endl;

		for (int i = 0; i < sizeArr - 1; i++)
		{
			for (int j = (sizeArr - 1); j > i; j--)
			{
				if (arrNumber[j - 1] > arrNumber[j])
				{
					int temp = arrNumber[j - 1];
					arrNumber[j - 1] = arrNumber[j];
					arrNumber[j] = temp;
				}
			}
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}



	}
	break;


	case 2:
	{
		int min, temp;
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Do sortirivki" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
		for (int i = 0; i <sizeArr - 1; i++)
		{
			min = i;
			for (int j = i + 1; j < sizeArr; j++)
			{
				if (arrNumber[j] < arrNumber[min])
					min = j;
			}
			int temp = arrNumber[i];
			arrNumber[i] = arrNumber[min];
			arrNumber[min] = temp;
		}
	}
	break;

	case 3:
	{
		int min, temp;
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Do sortirivki" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
		for (int i = 1; i < sizeArr; i++)
		{
			int value = arrNumber[i];
			int index = i;
			while ((index > 0) && (arrNumber[index - 1] > value))
			{
				arrNumber[index] = arrNumber[index - 1];
				index--;

			}
			arrNumber[index] = value;
		}
		cout << "Posle sortirovki  " << endl;
		for (int i = 0; i < sizeArr; i++)
		{

			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

	}



	/*1.	Используя датчик случайных чисел, заполнить
	массив из двадцати элементов неповторяющимися числами*/
	case 4:
	{
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Do sortirivki" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		cout << endl;
		cout << "Posle sortirivki" << endl;

		for (int i = 0; i < sizeArr - 1; i++)
		{
			for (int j = (sizeArr - 1); j > i; j--)
			{
				if (arrNumber[j - 1] > arrNumber[j])
				{
					int temp = arrNumber[j - 1];
					arrNumber[j - 1] = arrNumber[j];
					arrNumber[j] = temp;
				}
			}
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}


	}

	/*2.	Определить:
	a.	сумму всех элементов массива;
	b.	произведение всех элементов массива;
	c.	сумму квадратов всех элементов массива;
	d.	сумму шести первых элементов массива;
	e.	сумму элементов массива с k1-го по k2-й (значения k1 и k2 вводятся  с клавиатуры; k2 > k1);
	f.	среднее арифметическое всех элементов массива;
	g.	 среднее арифметическое элементов массива с s1-го по s2-й (значения s1 и s2 вводятся с клавиатуры; s2 > s1).
	*/
	case 5:
	{
		int arrNumber[sizeArr];
		int summa = 0;
		int proiz = 1;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 4;
		}
		cout << "Summa vsex chisek massiva" << endl;
		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		for (int i = 0; i < sizeArr; i++)
		{
			summa += arrNumber[i];
		}

		cout << "сумму всех элементов массива =  " << summa << endl;

		for (int j = 1; j < sizeArr; j++)
		{
			proiz *= arrNumber[j];
		}

		cout << "произведение всех элементов массива; =  " << proiz << endl;

		summa = 0;
		for (int i = 0; i <= 5; i++)
		{
			summa += arrNumber[i];
		}

		cout << "сумму шести первых элементов массива=  " << summa << endl;


		int k1, k2;
		summa = 0;
		cout << "Ведите сумму 1 :";
		cin >> k1;
		cout << "Ведите сумму 2 :";
		cin >> k2;
		if (k2 > k1)
		{
			for (int i = k1; i <= k2; i++)
			{
				summa += arrNumber[i];

			}
			cout << "среднее арифметическое всех элементов массива=  " << summa << endl;


		}


		for (int i = 0; i < sizeArr; i++)
		{
			summa += arrNumber[i];
		}
		summa = summa / sizeArr;
		cout << "среднее арифметическое всех элементов массива =  " << summa << endl;

		/*среднее арифметическое элементов массива с s1-го по s2-й (значения s1 и s2 вводятся с клавиатуры; s2 > s1)*/

		int s1, s2;
		summa = 0;
		int del = 1;
		cout << "Ведите сумму 1 :";
		cin >> s1;
		cout << "Ведите сумму 2 :";
		cin >> s2;
		if (s2 >s1)
		{
			for (int i = s1; i <= s2; i++)
			{
				summa += arrNumber[i] / (s1 - s2);


			}

			cout << "среднее арифметическое элементов массива с s1-го по s2-й=  " << summa << endl;


		}





	}



	}







	system("pause");
}