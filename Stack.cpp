      //Stack atau tumpukan

#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;//variabel mendeteksi data indeks

bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;   
	}
}

bool isFull(){
	if(top >= max){
		return true;
	} else {
		return false;
	}
}

void display(){
	if(!isEmpty()){
		cout << "data tersimpan : " << endl;
		for(int a = 0; a < top; a++)
			cout <<  a+1 << "." << data[a] << endl;	 
	}else{
		cout << "data tidak tersedia !" << endl;		
	}
	
	if(isFull()){
		cout << "maaf, stack sudah penuh" << endl;
	}
	cout << endl;
}

void push(){
	if(!isFull()){
		cout << "masukan data : ";
		cin >> data[top];
		top++;
	}
}

void pop(){
	if(!isEmpty()){
		top--;
	}
}

int main(){
	
	int pilihan;
	string isi;

	stack :
		system("cls");
		display(); 
		cout << "menu utama\n1. push\n2. pop" << endl;
		cout << "Pilihan : ";  
		cin >>pilihan;
		
		if(pilihan == 1){
			system("cls");
			push();
			goto stack;
		}
		else if(pilihan == 2){
			pop();
			goto stack;
		}
		system("cls");
		cout << "program selesai";
	return(0);
}
