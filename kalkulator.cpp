#include <iostream>
using namespace std;

class Kalkulator {



private:
	int a;
	int b;
	int wynik;
	char znak;

public:
	Kalkulator(int a, int b, char znak) {
		this->a = a;
		this->b = b;
		this->znak = znak;

	}
	void obliczenia() {
		switch (znak) {
		case '+':
			wynik = a + b;
			break;
		case '-':
			wynik = a - b;
			break;
		case '*':
			wynik = a * b;
			break;
		case '/':
			if (b == 0) {
				return;
			}
			else {
				wynik = a / b;
				break;
			}
		}

	}
	int getWynik() {
		return wynik;
	}
};

int main() {
	int a;
	int b;
	int wynik;
	char znak;
	cout << "podaj a:" << endl;
	cin >> a;
	cout << "podaj b" << endl;
	cin >> b;
	cout << "co chcesz zrobic" << endl;
	cin >> znak;

	Kalkulator calc = Kalkulator(a, b, znak);
	calc.obliczenia();

	cout << calc.getWynik();

}