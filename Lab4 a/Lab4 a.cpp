#include <iostream>
#include <cmath>
using namespace std;
/*
int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10;

int main() {

	//kod 04_03
	int a = 45, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	wyswietlanie(11, 22);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int a, int b) {
	int wynik = a + b;
	return wynik;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;

	*/
	/*
	//zad1
	void username(string urn);
	int main() {
		string urn;
		cin >> urn;
		username(urn);
		}

	void username(string urn) {
		cout << "Cześć, " << urn;
	}
	*/
	/*
	//zad2
	void tablica();
	int main(){
		tablica();
		return 0;
	}
	void tablica() {
		cout << (10 * 10) << endl;

	}
	*/
	/*
	void wieksza(int a, int b);
	int a, b;
	int wk(int a, int b);
	int main() {
		cin >> a;
		cin >> b;
		wk(a, b);
		wieksza(a, b);

	}
	void wieksza(int a, int b) {
		if (a < b) {
			cout << "b>a" <<endl;
		}
		if (a > b) {
			cout << "b<a" <<endl;
		}
	}
	int wk(int a, int b) {
		if (a < b) {
			cout << b << endl;
		}
		if (a > b) {
			cout << a << endl;
		}
		return 0;
	}
	*/
	/*
	//zad4
	void wyswietlNajmniejsza(int a, int b, int c);
	int zwrocNajmniejsza(int a, int b, int c);

	int main() {
		int a, b, c;
		cin >> a >> b >> c;
		wyswietlNajmniejsza(a, b, c);
		cout << zwrocNajmniejsza(a, b, c) << endl;
		return 0;
	}

	void wyswietlNajmniejsza(int a, int b, int c) {
		int minVal = a;
		if (b < minVal) minVal = b;
		if (c < minVal) minVal = c;
		cout << "Najmniejsza wprowadzona liczba to: " << minVal << endl;
	}

	int zwrocNajmniejsza(int a, int b, int c) {
		int minVal = a;
		if (b < minVal) minVal = b;
		if (c < minVal) minVal = c;
		return minVal;
	}
	*/
	/*
	//zad5
	double poleTrojkata(double a, double h);

	int main() {
		double a, h;
		cin >> a >> h;
		double pole = poleTrojkata(a, h);
		cout << pole * 2 << endl;
		return 0;
	}

	double poleTrojkata(double a, double h) {
		double pole = 0.5 * a * h;
		cout << "Pole trojkata wynosi: " << pole << endl;
		return pole;
	}
	*/
	/*
	//zad6
	void wyswietlDzielniki(int n);

	int main() {
		int n;
		cin >> n;
		wyswietlDzielniki(n);
		return 0;
	}

	void wyswietlDzielniki(int n) {
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				cout << i << " ";
			}
		}
		cout << n << endl;
	}
	*/
	/*
	//zad7
	double sredniaWazona(double a, double b);

	int main() {
		double a, b;
		cin >> a >> b;
		cout << sredniaWazona(a, b) << endl;
		return 0;
	}

	double sredniaWazona(double a, double b) {
		double w1, w2;
		cout << "Podaj wage 1: ";
		cin >> w1;
		cout << "Podaj wage 2: ";
		cin >> w2;
		return (a * w1 + b * w2) / (w1 + w2);
	}
	*/
	/*
	//zad8
	void przeciwprostokatna(double a, double b);

	int main() {
		double a, b;
		cin >> a >> b;
		przeciwprostokatna(a, b);
		return 0;
	}

	void przeciwprostokatna(double a, double b) {
		double c = sqrt(a * a + b * b);
		cout << c << endl;
	}
	*/
	/*
	//zad9
	double dodawanie(double a, double b);
	double odejmowanie(double a, double b);
	double mnozenie(double a, double b);
	double dzielenie(double a, double b);

	int main() {
		double a, b;
		char op;
		cin >> a >> op >> b;
		if (op == '+') cout << dodawanie(a, b) << endl;
		else if (op == '-') cout << odejmowanie(a, b) << endl;
		else if (op == '*') cout << mnozenie(a, b) << endl;
		else if (op == '/') cout << dzielenie(a, b) << endl;
		return 0;
	}

	double dodawanie(double a, double b) {
		return a + b;
	}

	double odejmowanie(double a, double b) {
		return a - b;
	}

	double mnozenie(double a, double b) {
		return a * b;
	}

	double dzielenie(double a, double b) {
		if (b == 0) {
			cout << "Nie mozna dzielic przez 0!" << endl;
			return 0;
		}
		return a / b;
	}
	*/
	/*
	//zad10
	double sumaZwracajaca(int ile);
	void sumaWyswietlajaca(int ile);

	int main() {
		int ile;
		cin >> ile;
		cout << sumaZwracajaca(ile) << endl;
		sumaWyswietlajaca(ile);
		return 0;
	}

	double sumaZwracajaca(int ile) {
		double suma = 0, x;
		for (int i = 0; i < ile; i++) {
			cin >> x;
			suma += x;
		}
		return suma;
	}

	void sumaWyswietlajaca(int ile) {
		double suma = 0, x;
		for (int i = 0; i < ile; i++) {
			cin >> x;
			suma += x;
		}
		cout << suma << endl;
	}
	*/
	/*
	//zad11
	double obwodProstokata(double a, double b);

	int main() {
		double a, b;
		cin >> a >> b;
		cout << obwodProstokata(a, b) << endl;
		return 0;
	}

	double obwodProstokata(double a, double b) {
		return 2 * (a + b);
	}
	*/
	/*
	//zad12
	double objetoscProstopadloscianu();

	int main() {
		cout << objetoscProstopadloscianu() << endl;
		return 0;
	}

	double objetoscProstopadloscianu() {
		double a, b, h;
		cin >> a >> b >> h;
		return a * b * h;
	}
	*/
	/*
	//zad13
	long long potega(int a, int b);

	int main() {
		int a, b;
		cin >> a >> b;
		cout << potega(a, b) << endl;
		return 0;
	}

	long long potega(int a, int b) {
		long long wynik = 1;
		for (int i = 0; i < b; i++) {
			wynik *= a;
		}
		return wynik;
	}
	*/
	/*
	//zad14
	long long silnia(int n);

	int main() {
		int n;
		cin >> n;
		cout << silnia(n) << endl;
		return 0;
	}

	long long silnia(int n) {
		long long wynik = 1;
		for (int i = 1; i <= n; i++) {
			wynik *= i;
		}
		return wynik;
	}
	*/