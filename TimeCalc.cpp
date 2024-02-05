#include <iostream>
#include <string>

using namespace std;

int h12 = 11, h24 = 23, m12 = 59, m24 = 59, s12 = 55, s24 = 55;

int displayClocks(int h, int h1, int m, int m1, int s, int s1) {
	cout << "************************" << endl;
	cout << "*" << ("                      ") << "*" << endl;
	
	if (h < 10) {
		cout << "*       0" << h;
	}
	else { 
		cout << "*       " << h;
	}
	if (m < 10) {
		cout << ":0" << m;
	}
	else {
		cout << ":" << m;
	}
	if (s < 10) {
		cout << ":0" << s << "       *" << endl;
	}
	else {
		cout << ":" << s << "       *" << endl;
	}

	cout << "*" << ("                      ") << "*" << endl;
	cout << "************************" << endl;

	cout << "************************" << endl;
	cout << "*" << ("                      ") << "*" << endl;
	
	if (h1 < 10) {
		cout << "*       0" << h1;
	}
	else {
		cout << "*       " << h1;
	}
	if (m1 < 10) {
		cout << ":0" << m1;
	}
	else {
		cout << ":" << m1;
	}
	if (s1 < 10) {
		cout << ":0" << s1 << "       *" << endl;
	}
	else {
		cout << ":" << s1 << "       *" << endl;
	}

	cout << "*" << ("                      ") << "*" << endl;
	cout << "************************" << endl;

	return 0;
}

int updateTime(int userOpt)
{
	if (userOpt == 1){
		h12 += 1;
		h24 += 1;
	}
	else if (userOpt == 2) {
		m12 += 1;
		m24 += 1;
	}
	else if (userOpt == 3) {
		s12 += 1;
		s24 += 1;
	}

	if (s12 > 59) {
		s12 = 0;
		s24 = s12;
		m12 += 1;
		m24 += 1;
	}
	if (m12 > 59) {
		m12 = 0;
		m24 = m12;
		h12 += 1;
		h24 += 1;
	}
	if (h12 > 12) {
		h12 %= 12;
	}
	if (h24 > 23) {
		h24 %= 24;
	}

	return h12, h24, m12, m24, s12, s24;
}

int displayMenu() {
	cout << "************************" << endl;
	cout << "*1 - Add One Hour      *" << endl;
	cout << "*2 - Add One Minute    *" << endl;
	cout << "*3 - Add One Second    *" << endl;
	cout << "*4 - Exit              *" << endl;
	cout << "************************" << endl;

	return 0;
}

int main() {

	int userOption = 0;

	while (userOption != 4) {
		displayClocks(h12, h24, m12, m24, s12, s24);
		displayMenu();
		cin >> userOption;
		h12, h24, m12, m24, s12, s24 = updateTime(userOption);
	}

	return 0;
}

