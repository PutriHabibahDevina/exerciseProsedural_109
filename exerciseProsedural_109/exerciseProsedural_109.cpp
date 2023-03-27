#include <iostream>
using namespace std;

int arr[20];
int n;

void input() 
{
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array = ";
		cin >> n;
		
		if (n <= 20)
		{
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen, \n";
		}
		cout << endl;
	}
		for (int i = 0; i < n; i++)
		{
			cout << "Data ke-" << ": ";
			cin >> arr[i];
		}
}

double rerata(double a, double b) {
	return (a+b) / 2;
}

string status(double rata, double nilM) {
	if (rata > 70 || nilM > 80)
		return "Diterima";
	else
		return "Ditolak";
}

int main() 
{
	string nNama;
	double nilM, nilB;

	cout << "Masukan Nilai Matematika = ";
	cin >> nilM;
	cout << "Masukan Nilai Bahasa Inggris = ";
	cin >> nilB;

	cout << "Masukan nama kandidat = ";
	cin >> nNama;
	cout << "Status kandidat = " << status(rerata(nilM, nilB));
	return 0;
}