#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void wyswietl_dzien(int x) {
	switch (x) {

	case 0:
		cout << "niedziela";
		break;
	case 1:
		cout << "poniedzialek";
		break;
	case 2:
		cout << "wtorek";
		break;
	case 3:
		cout << "sroda";
		break;
	case 4:
		cout << "czwartek";
		break;
	case 5:
		cout << "piatek";
		break;
	case 6:
		cout << "sobota";
		break;

	}
}




int main(int argc, char** argv) {



	if (argc == 2) {
		int dzien = atoi(argv[1]);
		wyswietl_dzien(dzien);
	}
	else
	{

		time_t czas;
		struct tm czas_info;

		time(&czas);
		localtime_s(&czas_info, &czas);

		int numerDniaTygodnia = czas_info.tm_wday;

		wyswietl_dzien(numerDniaTygodnia);
	}





	return 0;
}
