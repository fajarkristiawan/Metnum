#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int tambah(int x, int y);
int kurang(int x, int y);
int kali(int x, int y);
int pangkat(int x, int y);
void Fungsi(int x, int y);
void menu();


//algoritma
//main driver
int main(){
	int x,y,pilih,hasil,z;
	char opsi;

	Home:
	menu();
	printf("\n Masukkan Pilihan : "); scanf("%d", &pilih);
	switch(pilih){
	case 1:
   	system("cls");
		printf("Penjumlahan");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		hasil = tambah(x,y);
		printf("\nHasilnya Adalah : %d",hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 2:
   	system("cls");
		printf("Pengurangan");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		hasil = kurang(x,y);
		printf("\nHasilnya Adalah : %d",hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 3:
   	system("cls");
		printf("Perkalian");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		hasil = kali(x,y);
		printf("\nHasilnya Adalah : %d",hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 4:
   	system("cls");
		printf("Perpangkatan");
		printf("\n");
		printf("\nMasukkan Bilangan : "); scanf("%d", &x);
		printf("Masukkan Bilangan pangkat : "); scanf("%d", &y);
		hasil = pangkat(x,y);
		printf("Hasilnya Adalah : %d",hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 5:
   	system("cls");
		printf("Fungsi");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		Fungsi(x,y);
		printf("Hasilnya Adalah : 2x^2 - 3x+1 : %d", hasil);

		getch();
		system("cls");
		goto Home;
		break;
    }
}

void menu(){
	int pilih;

	printf("Menu");
	printf("\n 1. Tambah");
	printf("\n 2. Kurang");
	printf("\n 3. Kali");
	printf("\n 4. Pangkat");
	printf("\n 5. Fungsi");
}

int tambah(int x, int y){
	int hasil;
	hasil = x + y;
	return(hasil);
}

int kurang(int x, int y){
	int hasil;
	hasil = x - y;
	return(hasil);
}

int kali(int x, int y){
	int hasil;
	hasil = x * y;
	return(hasil);
}

int pangkat(int x, int y){
	int i,hasil;
	hasil=1;
	for(i=1;i<=y;i++){
		hasil=hasil*x;
	}
	return hasil;
}

void Fungsi(int x, int y){
	int q,hasil;
	for(q=x;q<=y;q++){
		hasil = (2*(q*q)) - ((3*q) + 1);
	}
}
