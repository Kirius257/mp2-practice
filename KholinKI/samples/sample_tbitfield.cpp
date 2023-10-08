#include <iostream>

#include "tbitfield.h"

int main()
{
	setlocale(LC_ALL, "rus");
	TBitField bf(18 + 1);//��������
	TBitField copy_bf(bf);//�����
	TBitField bf2(17 + 1);
	TBitField res1(1), res2(2), res3(3);
	cout << "����� �������� ���� bf = " << bf.GetLength() << endl;

	bf.SetBit(5);//���������� 5-�� ��� � 1.
	bf.SetBit(4);//���������� 4-�� ��� � 1.
	bf.SetBit(18);//���������� 18-�� ��� � 1.
	bf.SetBit(2);//���������� 2-�� ��� � 1.
	bf.SetBit(1);//���������� 1-�� ��� � 1.

	//�������� ���� �� ��������������
	bool status_bit = bf.GetBit(18);


	bf2.SetBit(3);//���������� 7-�� ��� � 1.
	bf2.SetBit(4);//���������� 4-�� ��� � 1.
	bf2.SetBit(8);//���������� 8-�� ��� � 1.
	bf2.SetBit(2);//���������� 2-�� ��� � 1.
	bf2.SetBit(1);//���������� 1-�� ��� � 1.


	bf.ClrBit(4);//���������� 4-�� ��� � 0.
	cout << "��������� 4-��� ����: " << bf.GetBit(4) << endl;
	if (bf == bf2) {
		cout << "������� ���� bf � bf2 ���������" << endl;
	}
	else {
		cout << "������� ����  bf � bf2 ��������" << endl;
	}

	if (bf != bf2) {
		cout << "������� ���� bf � bf2 ��������" << endl;
	}
	else {
		cout << "������� ���� bf � bf2 ���������" << endl;
	}

	//�������� �� �������� � ����
	bf = bf | bf;
	copy_bf = copy_bf & copy_bf;
	bf2 = ~bf2;

	//�������� ��������
	cout << "operator &" << endl;
	res1 = bf & bf2;
	cout << res1 << endl;
	cout << endl;
	cout << "operator |" << endl;
	res2 = bf2 | bf;
	cout << res2 << endl;
	cout << endl;
	cout << "operator ~" << endl;
	res3 = ~bf;
	cout << res3 << endl;

	//�������� �������� ������������
	/*bf = bf2 = copy_bf;*/

	//����� �� �����
	cout << "������� ���� res1: " << bf << endl;
	cout << "������� ���� res2: " << bf2 << endl;
	cout << "������� ���� res3: " << copy_bf << endl;

    return 0;
}
