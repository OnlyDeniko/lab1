#pragma once
#include<string>
using namespace std;
class TBitField {
private:
	int *mem;
	int size;
	int getBit(const int k);
	int getByte(const int k);
public:
	TBitField();
	TBitField(int sizeU);
	TBitField(const TBitField & tmp);
	~TBitField();
	TBitField &operator= (const TBitField & tmp);
	int* getMem() {
		int* res = new int[size];
		for (int i = 0; i < size; i++) {
			res[i] = mem[i];
		}
		return res;
	}
	int getSize() {
		return size;
	}
	void add(const int k);
	void del(const int k);
	bool GetBit(int k);
	std::string to_string(int sizeU);
	TBitField operator |(const TBitField & tmp);
	TBitField operator &(const TBitField & tmp);
	TBitField &operator|=(const TBitField & tmp);
	TBitField &operator&=(const TBitField & tmp);
	TBitField operator-(const TBitField & tmp);
	TBitField operator ~(void);
	int CntElem(int sizeU);
	bool operator==(const TBitField & tmp);
};

