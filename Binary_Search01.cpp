#include<iostream>
using namespace std;

int main(){
	int angka[] = {10, 3, 6, 2, 1, 7, 8};
	int length = sizeof(angka)/sizeof(*angka);
	int dtCari, hasilCari;
	cout<<"Data tersedia"<<endl;
	for(int a = 0; a < length; a++){
		cout<<"Index ke-"<<a<<" : "<<angka[a]<<endl;
	}
	cout<<"Data yang dicari : ";
	cin>>dtCari;
	for(int b = 0; b < length; b++){
		if(dtCari == angka[b]){
			hasilCari++;
		}
	}
	if(hasilCari == 0){
		cout<<"Data tidak ditemukan"<<endl;
	}else{
		cout<<"Data "<<dtCari<<" ditemukan di";
		for(int c = 0; c < length; c++){
			if(dtCari == angka[c]){
				cout<<" index ke-"<<c<<endl;
			}
		}
	}
}