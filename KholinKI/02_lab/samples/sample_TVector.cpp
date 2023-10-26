#include <iostream>
#include "TVector.h"

int main()
{
 
    setlocale(LC_ALL, "rus");
    cout << "�������� �������� vec1 � vec2,vec3:" << endl;
    TVector<TVector<double>> vector_vectors;
    TVector<double> vec1(4), vec2(4),vec3(4), res1(1), res2(1);
    double scalar = 0.0;
    cout << endl;

    cout << "��������� ������� vec1,vec2,vec3: " << endl;
    cout << "vec1 = ";
    cin >> vec1;
    cout << endl;

    cout << "vec2 = ";
    cin >> vec2;
    cout << endl;

    cout << "vec3 = ";
    cin >> vec3;
    cout << endl;
 
    cout << "��������� �������� ��������..." << endl;
    cout << "������ ������� vec1: " << vec1.GetSize() << endl;
    cout << "������ ������� vec2: " << vec2.GetSize() << endl;
    cout << "������ ������� vec3: " << vec3.GetSize() << endl;
    cout << endl;

    cout << "��������� ��������� ��������..." << endl;
    cout << "��������� ������ ������� vec1: " << vec1.GetStart() << endl;
    cout << "��������� ������ ������� vec2: " << vec2.GetStart() << endl;
    cout << "��������� ������ ������� vec3: " << vec3.GetStart() << endl;
    cout << endl;

    cout << "�������" << endl;
    cout << "vec1 = " << vec1 << endl << "vec2 = " << vec2 << endl << "vec3 = " << vec3 << endl;

    cout << "�������� �� ��������� �������� vec1,vec2" << endl;
    if (vec1 == vec2) {
        cout << "������� vec1 � vec2 ����������!" << endl;
        cout << "��������� �������� ==" << endl;
    }
    else if (vec1 != vec2) {
        cout << "������� vec1 � vec2 ��������!" << endl;
        cout << "��������� �������� !=" << endl;
    }
    cout << endl;

    cout << "�������� ������������ �������� vec3 � vec2: " << endl;
    vec3 = vec2;
    cout << "vec3= " <<vec3 << endl;

    cout << "��������-��������� ��������: " << endl;
    cout << "�������� ������� vec1 �� ��������" << endl;
    vec1 = vec1 + 6;
    cout << "vec1= " << vec1 << endl;

    cout << "��������� �� ������� vec2 �������" << endl;
    vec2 = vec2 - 4;
    cout << "vec2= " << vec2 << endl;

    cout << "��������� ������� vec3 �� ������" << endl;
    vec3 = vec3 * 5;
    cout << "vec3= " << vec3 << endl;

    cout << "��������-��������� ��������: " << endl;
    cout << "�������� �������� vec1 � vec2" << endl;
    res1 = vec1 + vec2;
    cout << "��������� ��������: " << res1 << endl;

    cout << "��������� �������� vec1 � vec3" << endl;
    res2 = vec1 - vec3;
    cout << "��������� ���������: " << res2 << endl;

    cout << "��������� �������� vec2 � vec3" << endl;
    scalar = vec2 * vec3;
    cout << "��������� ���������: " << scalar << endl;
    cout << endl;

    cout << "� ����� ��������� ������� �������: " << endl;
    cout << "vec1 = " << vec1 << endl << "vec2 = " << vec2 << endl << "vec3 = " << vec3 << endl;
    cout << "�� ������ ������!" << endl;
    

    return 0;
}
