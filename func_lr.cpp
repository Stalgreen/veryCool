#include <iostream>
using namespace std;
#include <windows.h>
#include <math.h>
#include <iomanip>
#include "func.h"

float n, s, m, c;
// int c;

void sum(float n, float s, float m) {
	//float c;
	c = s / (n / m);
	cout << setprecision(2) << c;
}
 void odz(float n, float s, float m) {
	if (m > n || n > s) {
		cout << "Error";
		exit(1);
	}
}
 void all(){
	 
 }
 