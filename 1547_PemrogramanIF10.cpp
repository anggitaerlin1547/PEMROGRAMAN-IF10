//Anggita Erlin Monica
//17.11.1547
//PROGRAM SEDERHANA DENGAN OOP
#include <iostream>
using namespace std;

class Produk{
		public :
			int pilih;
			
			void mugdigital(){
				cout<<"<--- Jenis Mug Digital --->\n";
				cout<<"\nMug Putih Standar  : 25K";
				cout<<"\nMug Putih Kaki     : 27K";
				cout<<"\nMug Warna Standar  : 30K";
				cout<<"\nMug Love           : 35K";
				cout<<"\nMug Tea            : 35K";
				cout<<"\nMug Bening         : 25K";
				cout<<"\nMug Inside         : 30K";
				cout<<"\nMug Coffee         : 25K";
				cout<<"\nMug Ohlala         : 30K";
				cout<<"\nMug Bamboo         : 35K";
				cout<<"\nMug Mini           : 17K";
				cout<<"\nMug Meymey Putih   : 40K";
				cout<<"\nMug Meymey Warna   : 45K";
				cout<<"\nMug Susu           : 45K";
				cout<<"\nMug Couple         : 60K";
				cout<<"\nMug Motif          : 38K";
			}
			void pin(){
				cout<<"<--- Jenis Pin --->\n";
				cout<<"\nPin Sedang 3.2 cm  : 3K";
				cout<<"\nPin Sedang 4.4 cm  : 4K";
				cout<<"\nPin Besar 5.8 cm   : 6K";
				cout<<"\nPin Jumbo 7.5 cm   : 8K";
				cout<<"\nPin Magnet 5.8 cm  : 8K";
			}
			
			void ganci(){
				cout<<"<--- Jenis Gantungan Kunci --->\n";
				cout<<"\nGantungan Kunci Standar 4.4 cm         : 8K";
				cout<<"\nGantungan Kunci Standar Standar 5.8 cm : 8K";
				cout<<"\nGantungan Kunci Pembuka Botol 4.4 cm   : 8K";
				cout<<"\nGantungan Kunci Kaki Tangan 4.4 cm     : 8K";
				cout<<"\nGantungan Kunci Kaki Tangan 5.8 cm     : 8K";
				cout<<"\nGantungan Kunci Akrilik                : 8K";
			}
			
			void keramik(){
				cout<<"<--- Jenis Keramik --->\n";
				cout<<"\nKeramik 10X20 : 25K";
				cout<<"\nKeramik 15X15 : 27K";
				cout<<"\nKeramik 15X20 : 27K";
				cout<<"\nKeramik 20X20 : 30K";
				cout<<"\nKeramik 20X25 : 35K";
				cout<<"\nKeramik Love  : 40K";
				cout<<"\nKeramik Oval  : 40K";
				cout<<"\nKeramik Bulat : 40K";
			}
			
			void jamkeramik(){
				cout<<"<--- Jenis Jam Keramik --->\n";
				cout<<"\nJam Keramik 10X20 : 30K";
				cout<<"\nJam Keramik 15X15 : 33K";
				cout<<"\nJam Keramik 15X20 : 33K";
				cout<<"\nJam Keramik 20X20 : 35K";
				cout<<"\nJam Keramik 20X25 : 40K";
				cout<<"\nJam Keramik Love  : 45K";
				cout<<"\nJam Keramik Oval  : 45K";
				cout<<"\nJam Keramik Bulat : 45K";
			}
			
			void piring(){
				cout<<"<--- Jenis Piring --->\n";
				cout<<"\nPiring Imut   : 28K";
				cout<<"\nPiring Sedang : 33K";
				cout<<"\nPiring Besar  : 43K";
				
			}
			
			void jamdinding(){
				cout<<"<--- Jenis Jam Dinding --->\n";
				cout<<"\nJam Imut          : 55K";
				cout<<"\nJam Kitchen       : 55K";
				cout<<"\nJam Besar         : 70K";
				cout<<"\nJam Besar A3      : 55K";
				cout<<"\nJam Akrilik Kecil : 35K";
				cout<<"\nJam Akrilik Besar : 55K";
			}
			
			void bantal(){
				cout<<"<--- Jenis Bantal --->\n";
				cout<<"\nBantal Velboa Polos : 70K";
				cout<<"\nBantal Velboa Motif : 70K";
				cout<<"\nBantal Rasfur       : 75K";
			}
			
			void payung(){
				cout<<"<--- Jenis Payung --->\n";
				cout<<"\nPayung Standar/Lipat : 55K";
				cout<<"\nPayung Golf          : 70K";
			}
			
			void tumbler(){
				cout<<"<--- Jenis Tumbler --->\n";
				cout<<"\nTumbler Kecil : 35K";
				cout<<"\nTumbler Besar : 40K";
			}
			
			void poster(){
				cout<<"<--- Jenis Poster --->\n";
				cout<<"\nPoster A4 tanpa bingkai : 25K";
				cout<<"\nPoster A3 tanpa bingkai : 45K";
				cout<<"\nPoster A2 tanpa bingkai : 65K";
				cout<<"\nPoster A1 tanpa bingkai : 95K";
				cout<<"\nPoster 3D A5            : 55K";
				cout<<"\nPoster 3D A4            : 90K";
			}
			
			void kaos(){
				cout<<"<--- Jenis Kaos --->\n";
				cout<<"\nKaos Sablon Putih       : 70K";
				cout<<"\nKaos Sablon Warna       : 70K";
				cout<<"\nKaos Digital Putih      : 60K";
				cout<<"\nKaos Digital Putih Kids : 55K";
				cout<<"\nKaos Digital Warna      : 75K";
				cout<<"\nKaos Digital Warna Kids : 70K";
			}
				
};
void Menu();

void kembali(){
	char kembali;
	cout	<<	"\n\n\tKembali ke Menu Utama (Y/y) : ";
	cin		>> kembali;
	if (kembali=='y'||kembali=='Y')
	{
		Menu();
	}
	else
		cout	<<	"Kesalahan Inputan";
}

void Menu(){
	Produk produk;

	system("cls");

	cout<<"   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<" ::::                  WARUNG DIGITAL                    ::::"<<endl;
	cout<<"::::------------------------------------------------------::::"<<endl;
	cout<<" ::::          Merchandise Nggak Ada Matinya!            ::::"<<endl;
	cout<<"   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t     +--------------+\n";
		cout<<"\t\t   [  DAFTAR  PRODUK  ]\n";
		//cout<<"\t\t     +------------+\n";
		cout<<"*===========================================================*\n";
		//cout<<"|\t\t             \t\t\t\t    |\n";
		cout<<"|\t\t    1.  Mug Digital\t\t\t    |\n";
		cout<<"|\t\t    2.  Pin          \t\t\t    |\n";
		cout<<"|\t\t    3.  Gantungan Kunci\t\t\t    |\n";
		cout<<"|\t\t    4.  Keramik \t\t\t    |\n";
		cout<<"|\t\t    5.  Jam Keramik    \t\t\t    |\n";
		cout<<"|\t\t    6.  Jam Dinding         \t\t    |\n";
		cout<<"|\t\t    7.  Piring         \t\t\t    |\n";
		cout<<"|\t\t    8.  Bantal         \t\t\t    |\n";
		cout<<"|\t\t    9.  Payung         \t\t\t    |\n";
		cout<<"|\t\t    10. Tumbler         \t\t    |\n";
		cout<<"|\t\t    11. Poster         \t\t\t    |\n";
		cout<<"|\t\t    12. Kaos         \t\t\t    |\n";
		//cout<<"|\t\t             \t\t\t\t    |\n";
		cout<<"*===========================================================*\n";
		cout<<"\t*-------------------------------------------*\n";
		cout<<"\t\t    Pilihan Anda : ";
		cin>>produk.pilih;
		system("cls");

	cout<<"\n";

	if(produk.pilih==1){
		produk.mugdigital();
		kembali();
	}
	else if(produk.pilih==2){
		produk.pin();
		kembali();
	}
	else if(produk.pilih==3){
		produk.ganci();
		kembali();
	}
	else if(produk.pilih==4){
		produk.keramik();
		kembali();
	}
	else if(produk.pilih==5){
		produk.jamkeramik();
		kembali();
	}
	else if(produk.pilih==6){
		produk.jamdinding();
		kembali();
	}
	else if(produk.pilih==7){
		produk.piring();
		kembali();
	}
	else if(produk.pilih==8){
		produk.bantal();
		kembali();
	}
	else if(produk.pilih==9){
		produk.payung();
		kembali();
	}
	else if(produk.pilih==10){
		produk.tumbler();
		kembali();
	}
	else if(produk.pilih==11){
		produk.poster();
		kembali();
	}
	else if(produk.pilih==12){
		produk.kaos();
		kembali();
	}else{
		exit(0);
	}
}

int main(){
	Menu();

return 0;
}
	

	
