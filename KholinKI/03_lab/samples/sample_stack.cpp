#include <iostream>
#include "Stack.h"
#include <clocale>

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "�������� �����..." << endl;
    Stack<double> st;


    cout << endl;
    cout << "������� ��������� �������� � ����?" << endl;
    int count = 0;
    cin >> count;
    cout << "�������� �������� � ����: " << endl;
    for (int i = 0; i < count; i++) {
        cin >> st;
    }
    
    cout << "������� ����� ����� �������� ������ " << st.Top() << " � ����� � ������ " << st.GetTop() << endl;
    cout << "������� ���������� ��������� � ����� ����� " << st.Size() << endl;
    cout << endl;

    if (st.IsEmpty()) {
        cout << "��������� �������� �������� �� �������!" << endl;
        cout << "C��� ������" << endl;
    }
    else {
        cout << "��������� �������� �������� �� �������!" << endl;
        cout << "C��� ��������" << endl;
    }
    cout << endl;
    if (st.IsFull()) {
        cout << "��������� �������� �������� �� �������!" << endl;
        cout << "���� ������" << endl;
    }
    else {
        cout << "��������� �������� �������� �� �������!" << endl;
        cout << "����  ��������" << endl;
    }
    cout << endl;
    cout << "���������� ��������� ��������� �� �����..." << endl;
    double stack_item1 = st.Pop();
    double stack_item2 = st.Pop();
    double stack_item3 = st.Pop();
    cout << stack_item1 << " " << stack_item2 << " " << stack_item3 << endl;
    return 0;
}
