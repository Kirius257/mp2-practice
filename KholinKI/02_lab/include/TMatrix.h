#ifndef _TMATRIX_H
#define _TMATRIX_H

#include "TVector.h"

//#�������:
//� ����������� ������� ���������� ������� ����������� �������� ������.

template <class Type> class TMatrix : public TVector<TVector<Type>> {
public:
	//#������������
	TMatrix(int mn = 10);//�������� �������
	TMatrix(const TMatrix& matr);//����������� ������
	TMatrix(const TVector<TVector<Type>>& v);//�������������� ������� �������� � �������

	//const TMatrix& operator=(const TMatrix& matr);//������������ ������

	//#��������� ������
	int operator ==(const TMatrix& matr)const;//�������� �� ��������� ������
	int operator !=(const TMatrix& matr)const;//�������� �� ����������� ������

	//#��������-��������� ��������
	TMatrix<Type> operator+(const Type& val);//�������� ������� � ���������
	TMatrix<Type> operator-(const Type& val);//��������� �� ������� ��������
	TMatrix<Type> operator*(const Type& val);//��������� ������� � ���������

	//���������-��������� ��������
	TMatrix<Type> operator+(const TMatrix& matr);
	TMatrix<Type> operator-(const TMatrix& matr);
	TMatrix operator*(const TMatrix& matr);

	//#����/�����
	friend istream& operator>>(istream& istr, TMatrix& obj) {
		for (int i = 0; i < obj.GetSize(); i++) {
			for (int j = 0; j < obj.GetSize(); j++) {
				istr >> obj.vector[i][j];
			}
		}
		return istr;
	}
	friend ostream& operator<<(ostream& ostr, const TMatrix& obj) {
		for (int i = 0; i < obj.GetSize(); i++) {
			for (int j = 0; j < obj.GetSize(); j++) {
				ostr << obj.vector[i][j];
			}
		}
		return ostr; 
	}
	
};

template <class Type>
TMatrix<Type>::TMatrix(int mn): TVector<TVector<Type>>(mn) {
	for (int i = 0; i < mn; i++) {
		vector[i] = TVector<Type>(mn - i, i);
	}
}

template <class Type>
TMatrix<Type>::TMatrix(const TMatrix<Type>& matr) {
	TVector<TVector<Type>>(matr);
}

template<class Type>
TMatrix<Type>::TMatrix(const TVector<TVector<Type>>& v): TVector<TVector<Type>>(v) {}   

template<class Type>
int TMatrix<Type>::operator ==(const TMatrix& matr)const {
	return TVector<TVector<Type>>::operator==(matr);
}

template<class Type>
int TMatrix<Type>::operator !=(const TMatrix& matr)const {
	return TVector<TVector<Type>>::operator!=(matr);
}

template<class Type>
TMatrix<Type> TMatrix<Type>::operator+(const Type& val) {
	return TVector<TVector<Type>>::operator+(val);
}

template<class Type>
TMatrix<Type> TMatrix<Type>::operator-(const Type& val) {
	return TVector<TVector<Type>>::operator-(val);
} 

template<class Type>
TMatrix<Type> TMatrix<Type>::operator*(const Type& val) {
	return TVector<TVector<Type>>::operator*(val);
}
template<class Type>
TMatrix<Type> TMatrix<Type>::operator+(const TMatrix& matr) {
	return TVector<TVector<Type>>::operator+(matr);
}

template<class Type>
TMatrix<Type> TMatrix<Type>::operator-(const TMatrix& matr) {
	return TVector<TVector<Type>>::operator-(matr);
}

template<class Type>
TMatrix<Type> TMatrix<Type>::operator*(const TMatrix<Type>& matr) {
	TVector<TVector<Type>> result_matrix(*this); 
	int I, j;
	for (I = 0; I < size; I++) {
		for (j = I; j < size; j++) {
			for (start_index = I; start_index < j; start_index++) {
				result_matrix[I][j] += (*this)[I][start_index] * matr.vector[start_index][j];
			}
		}
	}
	return TMatrix(result_matrix);
}

#endif