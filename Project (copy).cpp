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
		int noTransaksi = 0;
		double totalBelanja;
		float diskon;
		double potongan;
		double totalBayar;
	public:
		void setNoTransaksi(){
			noTransaksi++;
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
			//for(int i=0; i<n; i++){
			//	totalBelanja += keranjang[i];
			//}
			for(int i=0; i<n; i++){
				//totalBelanja += harga[i];
			}
		}
		void hitungPotongan(){
			potongan = totalBelanja * diskon;
		}
		void hitungPajak(){
			pajak = (totalBelanja - potongan) * 0.1;
		}
		void hitungTotalBayar(){
			totalBayar = totalBelanja - potongan + pajak;
		}
		void printStruk(){
			cout<<"================================"<<endl;
			cout<<"            HGZ Mart            "<<endl;
			cout<<"    Jl. Yang Terbaik, Malang    "<<endl;
			cout<<"================================"<<endl;
			cout<<tanggal<<endl;
			cout<<"No. "<<noTransaksi<<endl;
			cout<<nama<<endl; //nama kasir
			for (int i=0; i<; i++){
				cout<<keranjang[i]<<"\t"<<quantity[i]*harga[i]<<endl;
				cout<<quantity[i]<<"x"<<harga[i]<<endl;
			}
			cout<<"\n";
			cout<<"Subtotal = "<<totalBelanja<<endl;
			cout<<"Diskon "<<diskon*100<<"% = "<<potongan<<endl;
			cout<<"PPN 10% = "<<pajak<<endl;
			cout<<"Total = "<<totalBayar<<endl;
			cout<<"================================"<<endl;
			cout<<"Membership : "<<noPelanggan<<endl;
			cout<<"\n";
			cout<<"          Terima Kasih          "<<endl;
		}
};

int main(){
	
	return 0;
}
