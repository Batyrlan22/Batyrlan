#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct Janarmai {
	double climate;
	double distance;
	double fuel;
};

struct Mashina {
	string mashina_typi;
};

struct Jenilm {
	string jenil_m;
};

struct Jykm {
	string jyk_m;
};

struct Sportm {
	string sport_m;
};

void MashinaType() {
	bool number = false;
	int vybor_mashina;
	int jenil, jyk, sport;
	int toyota, lexus, mercedes, hyundai;
	Mashina M[3] = { {"Jenil Koligi"}, {"Jyk koligi"}, {"Sport koligi"} };
	do {
		cout << "[JANARMAI.KZ]: Kalagan koliktin tyrin tandanyz: " << "\n1. Jenil koligi" << "\n2. Jyk koligi" << "\n3. Sport koligi" << "\n-----> ";
		cin >> vybor_mashina;
		for (int i = 0; i < 3; i++) {
			if (vybor_mashina == i + 1) {
				number = true;
				break;
			}
		}
		if (!number) {
			cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
		}
	} while (!number);
	cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << vybor_mashina << endl;

	if (vybor_mashina == 1) {
		Jenilm A[4] = { {"Toyota"}, {"Lexus"}, {"Mercedes Benz"}, {"Hyundai"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: Jenil koliktin tyrin tandanyz: " << "\n1. Toyota" << "\n2. Lexus" << "\n3. Mercedes Benz" << "\n4. Hyundai" << "\n-----> ";
			cin >> jenil;
			for (int i = 0; i < 4; i++) {
				if (jenil == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << jenil << endl;
	}

	if (vybor_mashina == 2) {
		Jykm B[3] = { {"Iveco"}, {"Man"}, {"Volvo"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: Jyk koliktin tyrin tandanyz: " << "\n1. Iveco" << "\n2. Man" << "\n3. Volvo" << "\n-----> ";
			cin >> jyk;
			for (int i = 0; i < 3; i++) {
				if (jyk == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << jyk << endl;
	}

	if (vybor_mashina == 3) {
		Sportm C[3] = { {"Sportcar"}, {"Supercar"}, {"Gipercar"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: Sporttyk koliktin tyrin tandanyz: " << "\n1. Sportcar" << "\n2. Supercar" << "\n3. Gipercar" << "\n-----> ";
			cin >> sport;
			for (int i = 0; i < 3; i++) {
				if (sport == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << sport << endl;
	}

	if (jenil == 1) {
		Jenilm Toyota[4] = { {"Toyota Camry"}, {"Toyota Land Cruiser"}, {"Toyota RAV4"}, {"Toyota Supra"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: TOYOTA koliginin markasyn tandanyz: " << "\n1. TOYOTA CAMRY" << "\n2. TOYOTA LAND CRUISER" << "\n3. TOYOTA RAV4" << "\n4. TOYOTA SUPRA" << "\n-----> ";
			cin >> toyota;
			for (int i = 0; i < 4; i++) {
				if (toyota == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << toyota << endl;
	}

	if (jenil == 2) {
		Jenilm Lexus[4] = { {"LEXUS LC"}, {" LEXUS NX"}, {"LEXUS RC"}, {"LEXUS RX"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: LEXUS koliginin markasyn tandanyz: " << "\n1. LEXUS LC" << "\n2. LEXUS NX" << "\n3. LEXUS RC" << "\n4. LEXUS RX" << "\n-----> ";
			cin >> lexus;
			for (int i = 0; i < 4; i++) {
				if (lexus == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << lexus << endl;
	}

	if (jenil == 3) {
		Jenilm Mercedes[4] = { {"MERCEDES A-SEDAN"}, {"MERCEDES A-CLASS"}, {"MERCEDES A-CLASS AMG"}, {"MERCEDES AMG GT"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: MERCEDES BENZ koliginin markasyn tandanyz: " << "\n1. MERCEDES A-SEDAN" << "\n2. MERCEDES A-CLASS" << "\n3. MERCEDES A-CLASS AMG" << "\n4. MERCEDES AMG GT" << "\n-----> ";
			cin >> mercedes;
			for (int i = 0; i < 4; i++) {
				if (mercedes == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << mercedes << endl;
	}

	if (jenil == 4) {
		Jenilm Hyundai[4] = { {"HYUNDAI ACCENT"}, {"HYUNDAI ELANTRA"}, {"HYUNDAI GENESIS"}, {"HYUNDAI GRAND SANTA Fe"} };
		bool number = false;
		do {
			cout << "\n[JANARMAI.KZ]: MERCEDES BENZ koliginin markasyn tandanyz: " << "\n1. HYUNDAI ACCENT" << "\n2. HYUNDAI ELANTRA" << "\n3. HYUNDAI GENESIS" << "\n4. HYUNDAI GRAND SANTA Fe" << "\n-----> ";
			cin >> hyundai;
			for (int i = 0; i < 4; i++) {
				if (hyundai == i + 1) {
					number = true;
					break;
				}
			} if (!number) {
				cout << "\n[JANARMAI.KZ]: Siz spisoktagi jok variantti tandadynyz. Kaita tandaynyzdy syraimyz." << endl;
			}
		} while (!number);
		cout << "\n[JANARMAI.KZ]: Siz tandagan variant: " << hyundai << endl;
	}
}

void Araqashyq() {
	ofstream informacia("janarmai.txt");
	Janarmai distancia;
	Janarmai fuely;
	Janarmai climaty;
	cout << "\n[JANARMAI.KZ]: Klimattyn otyn shygynyna aserin eskeretin coefficientti engiziniz (adette 0.8-den 1.2-ge deiin)" << "\nJenil koik yshin coefficient: 1.0" << "\nJyk kolik yshin coefficient: 1.2" << "\nSporttyk kolik yshin coefficient: 0.8" << "\n-----> ";
	cin >> climaty.climate;
	cout << "[JANARMAI.KZ]: Koliktin jyrip otken kashyqtygyn engiziniz (km): ";
	cin >> distancia.distance;
	cout << "[JANARMAI.KZ]: Paidalanylgan otyn molsherin engizinz (litrmen): ";
	cin >> fuely.fuel;
	double rashod_topliva = (fuely.fuel / distancia.distance) * 100 * climaty.climate;
	informacia << "[JANARMAI.KZ]: Byl sizdin kolik arqyly jyrip otken qashyqtyktyn janarmai shygyny." << endl;
	informacia << "Koliktin jyrip otken kashyqtygy (km): " << distancia.distance << endl;
	informacia << "Paidalanylgan otyn molsherin engizinz (litrmen): " << fuely.fuel << endl;
	informacia << "Sizdin koliginizdin janarmai shygyny: " << rashod_topliva << " l/100km" << endl;
}

int main() {
	ofstream informacia("janarmai.txt");
	cout << "-----------------------------------------" << "\n | ---> [JANARMAI.KZ PROGRAMMASY] <--- | " << endl << "-----------------------------------------" << "\n[JANARMAI.KZ]: Salemetsizbe, qosh keldiniz! Siz byl programma arqyly koliktin jyrip otken qashyqtygy arkyly janarmaidyn shygynyn bile alasyz." << endl;
	MashinaType();
	Araqashyq();
	cout << "\n[JANARMAI.KZ]: Sizge kerekti informacia janarmai.txt documentinde saktalyngan.";
	cout << "\n[JANARMAI.KZ]: Tagy syraqtar bolatyn bolsa, bizdin JANARMAI.KZ programmasyn qoldana alasyz" << "\n[JANARMAI.KZ]: Bizdi qoldanqanyzga rakhmet!:D";
}
