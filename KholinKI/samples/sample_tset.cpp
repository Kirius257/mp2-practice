#include <iostream>

#include "tset.h"

int main()
{
	setlocale(LC_ALL, "rus");
	//�������� ��������
	TSet A(10 + 1);
	TSet B(20 + 1);
	TSet C(15 + 1);
	TSet copy_B(B);



	//�������� ��������
	cout << "�������� ��������� A = " << A.GetMaxPower() << endl;
	cout << "�������� ��������� B = " << B.GetMaxPower() << endl;
	cout << "�������� ��������� ����� B = " << copy_B.GetMaxPower() << endl;
	cout << "�������� ��������� C = " << C.GetMaxPower() << endl;

	int choice = 1;

	//���������� ��������
	cout << "������� �������� ��������� A" << endl;
	while (choice == 1) {
		cin >> A;
		cout << "Continue?(1/0)";
		cin >> choice;
	}
	choice = 1;
	cout << "������� �������� ��������� B" << endl;
	while (choice == 1) {
		cin >> B;
		cout << "Continue?(1/0)";
		cin >> choice;
	}
	choice = 1;
	cout << "������� �������� ��������� C" << endl;
	while (choice == 1) {
		cin >> C;
		cout << "Continue?(1/0)";
		cin >> choice;
	}
	//�������� �������� ������������
	/*A = B = copy_B;*/
	/*A = copy_B = B;*/

	//�������� �� ��������� ��������
	if (A == B) {
		cout << "��������� A � B ������ ��������" << endl;
	}
	else {
		cout << "��������� A � B ������ ��������" << endl;
	}

	//�������� �� ����������� ��������

	if (A != B) {
		cout << "��������� A � B ������ ��������" << endl;
	}
	else {
		cout << "��������� A � B ������ ��������" << endl;
	}

	//���������-������������� �������� ��� �����������
	A = A + 9;
	cout << "A= " << A << endl;
	B = B - 14;
	cout << "B= " << B << endl;

	A = A + B;
	B = A * C;
	C = ~C;
	cout << "C= " << C << endl;
	A = A - C;

	cout << "A= " << A << endl;
	cout << "B= " << B << endl;
	cout << "C= " << C << endl;
    return 0;
}
