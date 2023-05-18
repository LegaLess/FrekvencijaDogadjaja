#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {

	int n, zbir = 0;
	int brUspelihA = 0, brUspelihB = 0;
	double frA = 0, frB = 0;

	srand((unsigned)time(NULL));

	cout << "Unesite broj eksperimenata: ";
	cin >> n;

	while (n != 0) {

		brUspelihA = 0;
		brUspelihB = 0;

		for (int i = 0; i < n; i++)
		{
			zbir = 0;

			for (int j = 0; j < 3; j++)
			{
				zbir += rand() % 6 + 1;
			}

			if (zbir == 10) brUspelihA++;
			if (zbir == 11) brUspelihB++;

		}

		frA = (double)brUspelihA / (double)n;
		frB = (double)brUspelihB / (double)n;

		cout << "Relativna frekvencija dogadjaja A je: " << setprecision(20) << frA << endl;
		cout << "Relativna frekvencija dogadjaja B je: " << setprecision(20) << frB << endl;
		cout << "Apsolutna razlika ove dve frekvencije je :" << abs(frA - frB) << endl;

		cout << endl;

		cout << "Unesite broj eksperimenata (0 za kraj simulacije): ";
		cin >> n;
	}


	return 0;
}