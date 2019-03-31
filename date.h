//GRUPO: ANDRÉ HABBIB && LUAN ROCHA

#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class date {
	protected:
		int year_;

		int month_;

		int day_;


	public:
		date();
		date(const int& d, const int& m, const int& y);

		bool valid(void) const; //metodo para validar data.

		int day() const;
		int month() const;
		int year() const;

		void set_day(const int& day);
		void set_month(const int& month);
		void set_year(const int& year);

		date operator++(); //prefix
		date operator++(int); //postfix
		date operator--(); //prefix
		date operator--(int); //postfix

	};
			
	bool operator == (const date&, const date&); //operadores de comprarações
	bool operator != (const date&, const date&);
	bool operator < (const date&, const date&);
	bool operator > (const date&, const date&);
	bool operator <= (const date&, const date&);
	bool operator >= (const date&, const date&);

	ostream& operator<< (ostream& os, const date& d); //output operator
		



#endif