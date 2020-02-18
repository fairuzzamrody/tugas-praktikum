#include <iostream>
#include <windows.h>

using namespace std;

int main (int aggrc, char **argv)
{
	int matA[2][2]={4, 8, 2, 10};
	int transpose[2][2]={ };
	int j, i;
    cout<<" NAMA	: Fairuz Zamrody "<<endl;
	cout<<" NIM	: 19051397056"<<endl;
	cout<<" PRODI	: Manajeman Infomatika 19"<<endl<<endl;
	cout<<" ========= Praktikum Transpose Matrix ========="<<endl<<endl;
	cout<<"Matriks A"<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matA[i][j]<<" ";{
				transpose[j][i] = matA[i][j];
	}
		}
	cout<<endl;
}
cout<<"Hasil Transpose Matriks A "<<endl<<endl;
for(int i =0; i<2; i++){
	for (int j =0; j<2; j++){
		cout<<transpose[i][j]<<" ";
	}
cout<<endl;
}
return 0;
}

