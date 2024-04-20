#ifndef _TPOLINOM_H
#define _TPOLINOM_H

#include "TRingList.h"
#include "TMonom.h"
#include "ArExpression.h"
#include "SupFunctions.h"

class TPolynom {
private:
	TRingList<TMonom>* monoms;
	string polynom;
	map<string, double> values_xyz;
public:
	TPolynom();
	TPolynom(const string& str);
	TPolynom(const TRingList<TMonom>* monoms_list);
	TPolynom(const TPolynom& obj);
	~TPolynom();

	const TPolynom& operator=(const TPolynom& Q);
	bool operator==(const TPolynom& Q)const;
	TPolynom operator+(const TPolynom& Q);
	TPolynom operator-();
	TPolynom operator*(const TPolynom& Q);
	double operator()(double x,double y, double z);

	string GetPolynomString()const;
	TRingList<TMonom>* GetMonoms()const { return monoms; }

	TPolynom differentiate_by_x()const;
	TPolynom differentiate_by_y()const;
	TPolynom differentiate_by_z()const;

	friend istream& operator>>(istream& istr, TPolynom& Q);
	friend ostream& operator<<(ostream& ostr, const TPolynom& Q);
private:
	void Corrector();
	void cite_similars();
	void CreatePolynomString();
};
#endif