#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
	int matA[2][2]= {4, 2, 8, 10};
	int matB[2][2]= {-5, 8, 4, -12};
	int j,i;
	cout<<" NAMA	: Fairuz Zamrody "<<endl;
	cout<<" NIM	: 19051397056"<<endl;
	cout<<" PRODI	: Manajeman Infomatika 19"<<endl<<endl;
	cout<<" ====== Praktikum pengurangan Matrix ======"<<endl<<endl;
	cout<<"Matriks A"<<endl<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
		cout<<matA[i][j]<<" ";
   }
	cout<<endl<<endl;
   }
cout<<"Matriks B"<<endl<<endl;
for (int i=0; i<2; i++){
	for ( int j=0; j<2; j++){
	cout<<matB[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<"Hasil Pengurangan Matriks A dan B "<<endl;
for (int i=0; i<2; i++){
     for (int j=0; j<2; j++){
	//soal Pengurangan Kedua matriks
	cout<<matA[i][j]*matB[i][j]<<" ";	
 }
   cout<<endl;
}
system("PAUSE");
return 0;
}   

