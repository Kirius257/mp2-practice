#ifndef _TMATRIX_H
#define _TMATRIX_H

#include "TVector.h"

//#�������:
//� ����������� ������� ���������� ������� ����������� �������� ������.

template <class Type> class TMatrix : public TVector<TVector<Type>> {
public:
	//#������������
	TMatrix(int mn = 10);//�������� �������
	TMatrix(const TMatrix<Type>& matr);//����������� ������
	TMatrix(const TVector<TVector<Type>>& v);//�������������� ������� �������� � �������


	const TMatrix<Type>& operator=(const TMatrix<Type>& matr);//������������ ������ 

	//#��������� ������
	int operator ==(const TMatrix<Type>& matr)const;//�������� �� ��������� ������
	int operator !=(const TMatrix<Type>& matr)const;//�������� �� ����������� ������

	//���������-��������� ��������
	TMatrix<Type> operator+(const TMatrix<Type>& matr); 
	TMatrix<Type> operator-(const TMatrix<Type>& matr); 
	TMatrix operator*(const TMatrix<Type>& matr); 

	//#����/�����
	friend istream& operator>>(istream& istr, TMatrix& obj) {
		for (int i = 0; i < obj.GetSize(); i++) {
			for (int k = obj.GetStart() + i; k < obj.GetSize(); k++) {
				cin >> obj[i][k];
			}
		}
		return istr;
	}
	friend ostream& operator<<(ostream& ostr, const TMatrix& obj) {
		for (int i = 0; i < obj.GetSize(); i++) {
			for (int j = 0; j < obj.GetStart() + i; j++) {
				ostr << "	";
			}
			for (int k = obj.GetStart()+i; k < obj.GetSize(); k++) {
				ostr << obj.vector[i][k] << "	";
			}
			ostr << endl;
			
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
TMatrix<Type>::TMatrix(const TMatrix<Type>& matr): TVector<TVector<Type>>(matr) {}

template<class Type>
TMatrix<Type>::TMatrix(const TVector<TVector<Type>>& v): TVector<TVector<Type>>(v) {}   



template<class Type>
int TMatrix<Type>::operator ==(const TMatrix<Type>& matr)const {
	return TVector<TVector<Type>>::operator==(matr);
}

template<class Type>
int TMatrix<Type>::operator !=(const TMatrix<Type>& matr)const {
	return TVector<TVector<Type>>::operator!=(matr);
}

template<class Type>
const TMatrix<Type>& TMatrix<Type>::operator=(const TMatrix<Type>& matr) { 
	return TVector<TVector<Type>>::operator=(matr);
}


template<class Type>
TMatrix<Type> TMatrix<Type>::operator+(const TMatrix<Type>& matr) {
	return TVector<TVector<Type>>::operator+(matr);
}

template<class Type>
TMatrix<Type> TMatrix<Type>::operator-(const TMatrix<Type>& matr) {
	return TVector<TVector<Type>>::operator-(matr);
}

template<class Type>
TMatrix<Type> TMatrix<Type>::operator*(const TMatrix<Type>& matr) {
	if (size != matr.GetSize())throw Exeptions<int>(WRONG_SIZE, size);
	if (start_index != matr.GetStart())throw Exeptions<int>(WRONG_INDEX, start_index);
	TVector<TVector<Type>> result_matrix(*this); 
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (start_index =  i; start_index < j;start_index++)
				result_matrix[i][j] += result_matrix[i][start_index] * matr.vector[start_index][j]; 
		}
	}
	return TMatrix(result_matrix);
}



#endif