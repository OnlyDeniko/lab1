#include "TSet.h"

TSet::TSet() {
	MaxSize = 0;
	field = TBitField(0);
}

TSet::TSet(const int sz) {
	MaxSize = sz;
	field = TBitField(MaxSize);
}

TSet::TSet(const TSet & tmp) {
	MaxSize = tmp.MaxSize;
	field = tmp.field;
}

TSet::TSet(TBitField & tmp) {
	MaxSize = tmp.getSize() * 32;
	field = TBitField(MaxSize);
}

TSet::operator TBitField() {
	return field;
}


void TSet::insert(const int k) {
	if (k >= 1 && k <= MaxSize) {
		field.add(k);
	}
}

void TSet::erase(const int k) {
	if (k >= 1 && k <= MaxSize) {
		field.del(k);
	}
}

bool TSet::find(const int k) {
	if (k >= 1 && k <= MaxSize) {
		return field.GetBit(k);
	}
	else return false;
}

int TSet::getSizeField() {
	return field.CntElem(MaxSize);
}

bool TSet::operator==(const TSet & tmp) {
	if (MaxSize != tmp.MaxSize) return false;
	return field == tmp.field;
}

TSet & TSet::operator=(const TSet & tmp) {
	if (this == &tmp) return *this;
	MaxSize = tmp.MaxSize;
	field = tmp.field;
	return *this;
}

TSet TSet::operator+(const int k) {
	TSet res(*this);
	if (k >= 1 && k <= MaxSize) {
		res.insert(k);
	}
	return res;
}

TSet TSet::operator-(const int k) {
	TSet res(*this);
	if (k >= 1 && k <= MaxSize) {
		res.erase(k);
	}
	return res;
}

TSet TSet::operator+(const TSet & tmp) {
	TSet res(tmp);
	res.field |= field;
	return res;
}

TSet TSet::operator-(const TSet & tmp) {
	TSet res(MaxSize);
	res.field = this->field - tmp.field;
	return res;
}

TSet TSet::operator*(const TSet & tmp) {
	TSet res(tmp);
	res.field &= field;
	return res;
}

TSet & TSet::operator+=(const int k) {
	*this = *this + k;
	return *this;
}

TSet & TSet::operator*=(const int k) {
	*this = *this * k;
	return *this;
}

TSet & TSet::operator+=(const TSet & tmp) {
	*this = *this + tmp;
	return *this;
}

TSet & TSet::operator*=(const TSet & tmp) {
	*this = *this * tmp;
	return *this;
}

TSet TSet::operator~(void) {
	TSet res(*this);
	res.field = ~res.field;
	return res;
}

std::string TSet::getField() {
	return field.to_string(MaxSize);
}

TSet::~TSet() {
	//cout << "CALLED\n";
	MaxSize = 0;
	//field()->~TBitField();
}

int TSet::getMaxSize() {
	return MaxSize;
}

std::ostream & operator<<(std::ostream & out, TSet & tmp) {
	out << tmp.field.to_string(tmp.MaxSize);
	return out;
}