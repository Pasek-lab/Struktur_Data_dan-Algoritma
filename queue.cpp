#include <iostream>
using namespace std;

#define max 5
string data[max];
int top =0;

bool isFull(){
	if(top >= max){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "data antrian :"<<endl;
		for(int a= top-1; a>= 0; a--){
			cout << a+1 <<". "<< data[a] << endl;
		}
	}else{
		cout << "antrian kosong" << endl;
	}
	
	if(isFull()){
	cout << "antrian penuh" << endl;
	}
	cout << endl;
}


void enqueue(){
	if(!isFull()){
		cout << "masukan data : ";
		cin >> data[top];
		top++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a = 0; a < top-1; a++){
			data[a] = data[a+1];
		}
		top--;
	}
	
}

int main(){
	
	int pilihan;
	string isi;
	
	queue :
		system("cls");
		view( );
		cout <<"menu utama\n1.Enqueue\n2.Dequeue\nPilihan : ";
		cin >> pilihan;
	
	
	if(pilihan == 1){
		system("cls");
		cout << "Enqueue" <<endl;
		enqueue();
		goto queue;
	}else if (pilihan == 2){
		//cout << "Dequeue" <<endl;
		system("cls");
		dequeue();
		goto queue;
	}
	
	
	return(0);
}
