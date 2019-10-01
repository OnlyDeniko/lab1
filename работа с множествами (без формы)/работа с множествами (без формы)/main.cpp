#include<iostream>
#include"TBitField.h"
#include"TSet.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	//����� �����
	cout << "!����� �����!\n";
	int n;
	cout << "������� ������ �����: ";
	cin >> n;
	TBitField a(n), b(n);
	for (int i = 1; i <= (n + 1) / 2; i++) a.add(i);
	for (int i = (n + 3) / 4 ; i <= n; i++) b.add(i);
	
	cout << "A = " << a.to_string(n) << "\nB = " << b.to_string(n) << '\n';
	TBitField c(a & b);
	cout << "INTERSECTION = " << c.to_string(n) << '\n';
	c = a | b;
	cout << "UNION = " << c.to_string(n) << '\n';
	c = a - b;
	cout << "A - B = " << c.to_string(n) << '\n';
	c = b - a;
	cout << "B - A = " << c.to_string(n) << '\n';
	for (int i = (n + 3) / 4 * 3; i <= n; i++) b.del(i);
	for (int i = (n + 3) / 4 + 1; i <= n; i++) a.del(i);
	cout << "B ��� 4-�� �������� = " << b.to_string(n) << '\n';
	cout << "A ��� 2-�� �������� = " << a.to_string(n) << '\n';
	a = ~a;
	cout << "~A = " << a.to_string(n) << '\n';
	//����� �����
	cout << "!����� �����!\n";
	cout << "������� ������ �����: ";
	cin >> n;
	TSet aa(n), bb(n);
	for (int i = 1; i <= n; i++) {
		aa.insert(i);
		bb.insert(i);
	}
	cout << "A = " << aa << '\n' << "B = " << bb << '\n';
	cout << "A " << (aa == bb ? "= " : "!= ") << "B\n";
	aa = ~aa;
	cout << "~A = " << aa << '\n';
	cout << "A " << (aa == bb ? "= " : "!= ") << "B\n";
	for (int i = 1; i <= (n + 1) / 2; i++) aa.insert(i);
	cout << "A = " << aa << '\n' << "B = " << bb << '\n';
	TSet cc(aa * bb);
	cout << "INTERSECTION = " << cc << '\n';
	cc = aa + bb;
	cout << "UNION = " << cc << '\n';
	cc = aa - bb;
	cout << "A - B = " << cc << '\n';
	cc = bb - aa;
	cout << "B - A = " << cc << '\n';
	cout << "����� ��������� � ���� �\n";
	for (int i = 0; i < 10; i++) {
		int x;
		cout << "������� �������, ������� ������ ��������� �� �������: ";
		cin >> x;
		cout << "������� " << (aa.find(x) ? "" : "�� ") << "����������.\n";
	}
	return 0;
}