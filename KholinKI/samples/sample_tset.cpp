#include <iostream>

#include "tset.h"

int main()
{
	
	setlocale(LC_ALL, "rus");
	cout << "�������� ��������..." << endl;
	//�������� ��������
	TSet A(10 + 1);
	TSet B(20 + 1);
	TSet C(15 + 1);
	TSet copy_B(B);
	TSet res1(1), res2(1), res3(1),res4(1);
	cout << endl;
	cout << "������������� ��������� ��������:" << endl;
	//�������� ��������
	cout << "�������� ��������� A = " << A.GetMaxPower() << endl;
	cout << "�������� ��������� B = " << B.GetMaxPower() << endl;
	cout << "�������� ��������� ����� B = " << copy_B.GetMaxPower() << endl;
	cout << "�������� ��������� C = " << C.GetMaxPower() << endl;
	cout << endl;
	int choice = 1;

	//���������� ��������
	cout << "���� ��������� ��������� A:" << endl;
	cout << "������� �������� ��������� A" << endl;
	while (choice == 1) {
		cin >> A;
		cout << "Continue?(1/0)";
		cin >> choice;
	}
	choice = 1;
	cout << endl;
	cout << "���� ��������� ��������� B:" << endl;
	cout << "������� �������� ��������� B" << endl;
	while (choice == 1) {
		cin >> B;
		cout << "Continue?(1/0)";
		cin >> choice;
	}
	choice = 1;
	cout << endl;
	cout << "���� ��������� ��������� C:" << endl;
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
	cout << endl;
	cout << "��������� �������� A �  B: " << endl;
	cout << endl;
	cout << "�������� �� ���������:" << endl;
	if (A == B) {
		cout << "��������� A � B ������ ��������" << endl;
	}
	else {
		cout << "��������� A � B ������ ��������" << endl;
	}
	cout << endl;
	//�������� �� ����������� ��������
	cout << "�������� �� �����������:" << endl;
	if (A != B) {
		cout << "��������� A � B ������ ��������" << endl;
	}
	else {
		cout << "��������� A � B ������ ��������" << endl;
	}
	cout << endl;
	//���������-������������� �������� ��� �����������
	cout << "���������� ���������-������������� �������� ��� �����������: " << endl;
	cout << endl;
	cout << "����������� ��������� A � ��������� 9" << endl;
	A = A + 9;
	cout << "A= " << A << endl;
	cout << endl;
	cout << "�������� ��������� B � ��������� 14" << endl;
	B = B - 14;
	cout << "B= " << B << endl;
	cout << endl;

	cout << "����������� ��������� A � ���������� B" << endl;  
	res1 = A + B;
	cout << "res1= " << res1 << endl;
	cout << endl;

	cout << "����������� ��������� A � ���������� C" << endl;
	res2 = A * C;
	cout << "res2= " << res2 << endl;
	cout << endl;

	cout << "���������� � ��������� C" << endl;
	res3 = ~C;
	cout << "res3= " << res3 << endl;
	cout << endl;

	cout << "�������� �������� A � C" << endl;
	res4 = A - C;
	cout << "res4= " << res4 << endl;
	cout << endl;

	//��������� A,B,C
	cout << "��������� A,B,C" << endl;
	cout << "A= " << A << endl;
	cout << "B= " << B << endl;
	cout << "C= " << res3 << endl;

    return 0;
}
