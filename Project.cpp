#include <iostream>
using namespace std;

class Pembayaran{
	private:
		double change;
		string metode;
		int pil;
		int total, bayar;
	public:
		void showMetodePembayaran(){
			do {
			cout<<"Metode Pembayaran"<<endl;
			cout<<"1. Tunai"<<endl;
			cout<<"2. QRIS"<<endl;
			cout<<"3. Kartu Kredit/Debit"<<endl;
			cout<<"Pilihan : ";
			cin>>pil;
			} while (pil < 1 || pil > 3);
		}
		void setMetodePembayaran(){
			if (pil == 1){
				metode = "Tunai";
				tunai(total, bayar);  
			}
			else if (pil == 2){
				metode = "QRIS";
				nonTunai(metode);
			}
			else if (pil == 3){
				metode = "Kartu Kredit/Debit";
				nonTunai(metode);
			}
		}
		void tunai(double t, double b){
			change = t - b;
		}
		void nonTunai(string m){
			change = 0;
		}
};

class Transaksi{
	private:
		double pajak; //10%
		int noTransaksi;
		double totalBelanja;
		float diskon;
		double potongan;
		double totalBayar;
	public:
		void setNoTransaksi(){
			 
		}
		void setDiskon(string id){
			if (id == "silver"){
				diskon = 0.05;
			}
			else if (id == "gold"){
				diskon = 0.1;
			}
			else if (id == "platinum"){
				diskon = 0.15;
			}
			else {
				diskon = 0;
			}
		}
		void hitungTotalBelanja(){
			for(int i=0; i<n; i++){
				//totalBelanja += keranjang[i];
			}
		}
		void hitungPotongan(){
			potongan = totalBelanja * diskon;
		}
		void hitungPajak(){
			pajak = totalBelanja * 0.1;
		}
		void hitungTotalBayar(){
			totalBayar = totalBelanja - potongan + pajak;
		}
};

int main(){
	
	
	return 0;
}
