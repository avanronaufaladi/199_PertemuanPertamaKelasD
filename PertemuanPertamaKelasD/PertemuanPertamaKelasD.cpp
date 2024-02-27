
#include <iostream>
using namespace std;
int main()
{
   //begin
    
 
	// numeric,nTinggi,nLuas
	// display 'Masukan Alasnya='
	// accept nAlas
	// display 'masukan tingginya='
	// accept nTinggi
	// compute nLuas = 1/2 * nAlas * nTinggi
	// display 'Luasnya adalah =' + nLuas
	// end

	int nAlas, nTinggi;
	double nLuas;
        cout << "Masukan Alasnya= ";
		cin >> nAlas;
		cout << "Masukan Tinginya";
		cin >> nTinggi;
		nLuas = 0,5 * (nAlas * nTinggi);
		cout << "Luasnya adalah= " << nLuas << endl;

		system("pause");
}


