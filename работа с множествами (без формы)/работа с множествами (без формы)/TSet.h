#pragma once
#include<iostream>
#include"TBitField.h"
using namespace std;
class TSet {
private:
	int MaxSize;
	TBitField field;
public:
	TSet();
	TSet(const int sz);
	TSet(const TSet & tmp);
	TSet(TBitField & tmp);
	operator TBitField();
	~TSet();
	int getMaxSize();
	void insert(const int k);
	void erase(const int k);
	bool find(const int k);
	int getSizeField();
	bool operator==(const TSet & tmp);
	TSet &operator=(const TSet & tmp);
	TSet operator+(const int k);
	TSet operator-(const int k);
	TSet operator+(const TSet & tmp);
	TSet operator*(const TSet & tmp);
	TSet operator-(const TSet & tmp);
	TSet &operator+=(const int k);
	TSet &operator*=(const int k);
	TSet &operator+=(const TSet & tmp);
	TSet &operator*=(const TSet & tmp);
	TSet operator ~(void);
	std::string getField();
	friend std::ostream &operator<<(std::ostream & out, TSet & tmp);
};
