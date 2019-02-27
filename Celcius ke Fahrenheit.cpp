/*Nama		:Hadiza Cahya Firdaus
NPM			: 140810180042
Tahun		: 2019
Deskripsi	: Mengubah Celcius ke Fahrenheit
*/

#include<iostream>
using namespace std;

float cel2Fah(float temp){
	
	return temp *9/5+32;
}

int main(){
	int celcius = 9;
	float fahrenheit = cel2Fah(celcius);
	cout<<"temp is "<<fahrenheit;
}

