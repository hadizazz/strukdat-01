/*Nama		:Hadiza Cahya Firdaus
NPM			: 140810180042
Tahun		: 2019
Deskripsi	: Fizzbuzz apabila angka dapat di bagi 3 dan 5
*/

#include<iostream>
using namespace std;

void fizzbuzz(int& a){
	cout<<"Masukkan Jumlah angka : ";cin>>a;
	for(int b=a;b>0;b--){
		if(b%3==0||b%5==0){
			cout<<"Fizzbuzz"<<endl;
		}
		else{
			cout<<b<<endl;
		}
	}
}
int main(){
int a;
	fizzbuzz(a);
}
