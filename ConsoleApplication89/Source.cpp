#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ���� ��� ���������� �����*/
		/*2.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ��� ����� ������*/
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
	/*	3.	������������ ������ ����� ����� �����.���������� �� ����� ������ ����� ������� ��� ����� 3 � 6
	� ������� ������� �� �����.*/
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
		/*4.	������������ ������ ����� ����� ����� �.���������� ������� ��� ����� ����� �, ��� ������� � 
		�������� ��� ������� �� �*� � �� �������� ��� ������� �� �*�*�*/
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
		/*5.	������������ ������ ����� ����� �.��������� ������ ����������, ��� ��� ����� ���� ����� ����� ����� �*�*/
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
		/*6.	������������ ������ ����� �����.���������� ������� ��� ����� �����, �� ������� �������� ����� ��������
		��� �������.*/
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
		/*7.	������������ ������ ��� ����� �����.���������� ������� ��� ����� �����, 
		�� ������� ��� ��������� ����� ������� ��� �������.*/
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