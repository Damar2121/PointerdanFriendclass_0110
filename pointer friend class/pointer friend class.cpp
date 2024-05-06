#include <iostream>
using namespace std;

class mahasiswa {
   public:
	   int nim;
	   void showNim() {
		   cout << "No Induk = " << nim << endl;
	   }
};

int main() {
	mahasiswa mhs{1}; // object mhs
	mhs.showNim(); // member access operator

	mahasiswa& refMhs = mhs; // pointer reference refMhs
	refMhs.nim = 2; // member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; // pointer dereference pMhs
	pMhs->nim = 3; // arrow operator
	mhs.showNim();
	return 0;
}