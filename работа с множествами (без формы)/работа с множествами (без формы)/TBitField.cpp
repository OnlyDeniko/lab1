#include "TBitField.h"
#include<iostream>
using namespace std;

int TBitField::getBit(const int k) {
	return (k - 1) % (8 * sizeof(int));
}

int TBitField::getByte(const int k) {
	return (k - 1) / int(8 * sizeof(int));
}

TBitField::TBitField() {
	size = 0;
	mem = new int[size];
}

TBitField::TBitField(int sizeU) {
	size = (sizeU + (8 * sizeof(int)) - 1) / (8 * sizeof(int));
	mem = new int[size];
	for (int i = 0; i < size; i++) mem[i] = 0;
}

TBitField::TBitField(const TBitField & tmp) {
	size = tmp.size;
	mem = new int[size];
	for (int i = 0; i < size; i++) {
		mem[i] = tmp.mem[i];
	}
}

TBitField::~TBitField() {
	delete[] mem;
	size = 0;
}

TBitField & TBitField::operator=(const TBitField & tmp) {
	if (this == &tmp) {
		return *this;
	}
	if (size != tmp.size) {
		if (size) {
			delete[] mem;
			size = 0;
		}
		size = tmp.size;
		mem = new int[size];
	}
	for (int i = 0; i < size; i++) {
		mem[i] = tmp.mem[i];
	}
	return *this;
}

void TBitField::add(const int k) {
	mem[getByte(k)] |= (1 << getBit(k));
}

void TBitField::del(const int k) {
	mem[getByte(k)] &= ~(1 << getBit(k));
}

bool TBitField::GetBit(int k) {
	return bool(mem[getByte(k)] & (1 << getBit(k)));
}

TBitField TBitField::operator-(const TBitField & tmp) {
	TBitField res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] = 0;
		for (int j = 0; j < 32; j++) {
			if ((mem[i] & (1 << j)) && !(tmp.mem[i] & (1 << j))) {
				res.mem[i] |= (1 << j);
			}
		}
	}
	return res;
}
std::string TBitField::to_string(int sizeU) {
	std::string res;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 8 * sizeof(int); j++) {
			if ((mem[i] & (1 << j)) != 0) {
				int gg = (i * 8 * sizeof(int) + j + 1);
				if (gg <= sizeU) {
					res += std::to_string(gg) + " ";
				}
			}
		}
	}
	if (res.size()) res.pop_back();
	return res;
}

TBitField TBitField::operator|(const TBitField & tmp) {
	TBitField res(tmp);
	for (int i = 0; i < size; i++) {
		res.mem[i] |= mem[i];
	}
	return res;
}

TBitField & TBitField::operator|=(const TBitField & tmp) {
	*this = *this | tmp;
	return *this;
}
TBitField & TBitField::operator&=(const TBitField & tmp) {
	*this = *this & tmp;
	return *this;
}
TBitField TBitField::operator&(const TBitField & tmp) {
	TBitField res(tmp);
	for (int i = 0; i < size; i++) {
		res.mem[i] &= mem[i];
	}
	return res;
}

TBitField TBitField::operator~(void) {
	TBitField res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] = ~res.mem[i];
	}
	return res;
}

int TBitField::CntElem(int sizeU) {
	int ans = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 8 * sizeof(int); j++) {
			if ((mem[i] & (1 << j)) != 0) {
				int gg = (i * 8 * sizeof(int) + j + 1);
				if (gg <= sizeU) {
					ans++;
				}
			}
		}
	}
	return ans;
}

bool TBitField::operator==(const TBitField & tmp) {
	if (size != tmp.size) return false;
	for (int i = 0; i < size; i++) {
		if (tmp.mem[i] != mem[i]) return false;
	}
	return true;
}
