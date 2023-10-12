#include <iostream>

#include "tbitfield.h"

int main()
{


	

	setlocale(LC_ALL, "rus");
	cout << "�������� ������� �����..." << endl;
	TBitField bf(20 + 1);//��������
	TBitField copy_bf(bf);//�����
	TBitField bf2(17 + 1);
	TBitField res1(1), res2(2), res3(3);
	cout << endl;
	cout << "������� ���� bf: " << bf << endl;
	cout << "������� ���� copy_bf: " << copy_bf << endl;
	cout << "������� ���� bf2: " << bf2<< endl;
	cout << endl;

	cout << "����� �������� ���� bf = " << bf.GetLength() << endl;
	cout << endl;
	cout << "��������� �������� ���� bf..." << endl;
	bf.SetBit(5);//���������� 5-�� ��� � 1.
	bf.SetBit(4);//���������� 4-�� ��� � 1.
	bf.SetBit(20);//���������� 20-�� ��� � 1.
	bf.SetBit(2);//���������� 2-�� ��� � 1.
	bf.SetBit(1);//���������� 1-�� ��� � 1.
	cout << "������� ���� bf: " << bf << endl;

	//�������� ���� �� ��������������
	bool status_bit = bf.GetBit(16);
	cout << endl;
	cout << "��������� �������� ���� bf2..." << endl;
	
	bf2.SetBit(3);//���������� 7-�� ��� � 1.
	bf2.SetBit(4);//���������� 4-�� ��� � 1.
	bf2.SetBit(8);//���������� 8-�� ��� � 1.
	bf2.SetBit(2);//���������� 2-�� ��� � 1.
	bf2.SetBit(1);//���������� 1-�� ��� � 1.
	cout << "������� ���� bf2: " << bf2 << endl;
	cout << endl;
	cout << "������� 4-��� ���� �������� ���� bf..." << endl;
	bf.ClrBit(4);//���������� 4-�� ��� � 0.
	cout << "��������� 4-��� ���� bf: " << bf.GetBit(4) << endl;
	cout << "������� ���� bf: " << bf << endl;
	cout << endl;
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
	cout << endl;
	////�������� �� �������� � ����
	//bf = bf | bf;
	//copy_bf = copy_bf & copy_bf;
	//bf2 = ~bf2;

	cout << "���������� �������� ��� �������� ������: " << endl;
	cout << endl;
	//�������� ��������
	cout << "operator &: bf � bf2" << endl;
	res1 = bf & bf2;
	cout << res1 << endl;
	cout << endl;
	cout << "operator | bf2 ��� bf" << endl;
	res2 = bf2 | bf;
	cout << res2 << endl;
	cout << endl;
	cout << "operator ~ �� bf" << endl;
	res3 = ~bf;
	cout << res3 << endl;

	//�������� �������� ������������
	/*bf = bf2 = copy_bf;*/
	cout << endl;
	cout << "���������� ��������: " << endl;
	//����� �� �����
	cout << "������� ���� res1: " << res1 << endl;
	cout << "������� ���� res2: " << res2 << endl;
	cout << "������� ���� res3: " << res3 << endl;

    return 0;
}
