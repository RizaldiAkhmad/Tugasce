#include <iostream>
using namespace std;

int main(){
	
	double luasRumah = 42 ;
	double lantaiParket =193*1215 ;
	double luas1box = lantaiParket*8/1000000;
	cout << 'Luas Rumah        :'<<luasRumah<<"m2"<<endl;
	cout << 'Luas 1 box parket :'<<luas1box<<"m2"<<endl;
	
	double jumlahBoxP,biayaParket,biayaPasang,totalBiaya;
	jumlahBoxP  = luasRumah/luas1box;
	cout << "Jumlah Box Parket   :"<<jumlahBoxP<<endl;
	biayaParket = jumlahBoxP*500;
	cout<< "Biaya Parket(Rp)     :"<<biayaParket<<endl;
	biayaPasang = luasRumah*20;
	cout<< "Biaya Pasang(Rp)     :"<<biayaPasang<<endl;
	totalBiaya  = biayaParket+biayaPasang;
	cout<< "Total Biaya(Rp)      :"<<totalBiaya<<endl;
	
}
