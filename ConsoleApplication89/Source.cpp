#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры*/
		/*2.	Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные*/
		double a, b, c,qty,qty1,qty2;
		qty = 0;
		qty1 = 0;
		qty2 = 0;
		for (int i = 100;i < 1000;i++)
		{
			a = i % 10;
			b = i % 100 / 10;
			c = i / 100;
			if (a == b&&b != c || a == c&&c != b || b == c&&b != a)
			{
				qty++;
			}
			else if (a == b&&b == c)
			{
				qty1++;
			}
			else
			{
				qty2++;
			}


		}
		cout << "Kolichestvo chisel s dvumya odinakovymi ciframi= " << qty << endl;
		cout << "Kolichestvo chisel s tremya odinakovymi ciframi= " << qty1 << endl;
		cout << "Kolichestvo chisel s raznymi ciframi= " << qty2 << endl;
	}
	if (task == 2)
	{
	/*	3.	Пользователь вводит любое целое число.Необходимо из этого целого числа удалить все цифры 3 и 6
	и вывести обратно на экран.*/
		long long int a,f,a1;// 123456
		f = 10;
		a1 = 0;
		cin >> a;
		for (int i = 10;f > 1;i*=10)
		{
			f = a%i / (i / 10);
			//cout << f << endl;
			if (f == 3 || f == 6)
			{
				i/=10;
				a/= 10;
			}
			else
			{
				a1+= f*(i / 10);
				cout <<"i= "<< i << endl;
			}
			cout << a1<< endl;
			
		}
	}
	if (task == 3)
	{
		/*4.	Пользователь вводит любое целое число А.Необходимо вывести все целые числа В, для которых А 
		делиться без остатка на В*В и не делиться без остатка на В*В*В*/
		int a;
		cin >> a;
		for (int i = 1;i<a;i++)
		{
			if (a % (i*i) == 0)
			{
				cout << "Delitsya bez ostatka na b*b " << i << endl;
			}
			if (a % (i*i*i) != 0)
			{
				cout << "Ne delitsya bez ostatka na b*b*b " << i << endl;
			}
		}
	}
	if (task == 4)
	{
		/*5.	Пользователь вводит целое число А.Программа должна определить, что куб суммы цифр этого числа равен А*А*/
		int a,f,sum;
		sum = 0;
		cin >> a;
		f = 120;
		for (int i = 10;f > 1;i*=10)
		{
			f = a%i / (i / 10);
			sum += f;
			if (pow(sum,3) == a*a)
			{
				cout << a << endl;
			}
			//cout << f << endl;
			//cout << sum << endl;
		}
	}
	if (task == 5)
	{
		/*6.	Пользователь вводит целое число.Необходимо вывести все целые числа, на которое заданное число делиться
		без остатка.*/
		int a;
		cin >> a;
		for (int i = 1;i < a;i++)
		{
			if (a%i == 0)
			{
				cout << i << endl;
			}
		}
	}
	if (task == 6)
	{
		/*7.	Пользователь вводит два целых числа.Необходимо вывести все целые числа, 
		на которые оба введенных числа делятся без остатка.*/
		int a, b;
		cin >> a >> b;
		for (int i = 1;i < a&&i<b;i++)
		{
			if (a%i==0&&b%i == 0)
			{
				cout << i << endl;
			}
		}
	}
}