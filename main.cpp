#include<stdio.h>
#include<list>
#include <iostream>
using namespace std;


int main() {

	list<const char*>Eki{ "\nTokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
								"Sugamo","Otsuka","Ikebukuro","Mejiro","Takabanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
								"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};
	printf("1970年");
	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {
		cout << *itr << endl;
	
	}

	printf("\n2019年(西日暮里挿入)\n");
	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {

		if (strcmp(*itr, "Tabata") == 0) {
			itr = Eki.insert(itr, "Nishi-Nippori"); ++itr;
		}
	}

	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {
		cout << *itr << endl;

	}

	printf("\n2022年(高輪ゲートウェイ挿入)\n");
	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {

		if (strcmp(*itr, "Tamachi") == 0) {
			itr = Eki.insert(itr, "Takanawa Geteway"); ++itr;
		}
		
	}
	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {

		cout << *itr << endl;
	}
	return 0;
}