#include <iostream>

#include "Tela.h"

using namespace std;

Tela::Tela( double largura, double altura ) {
	setLargura( largura );
	setAltura( altura );
}

void Tela::setLargura( double largura ) {
	if ( largura < 0 )
		Tela::largura = 0;
	else
		Tela::largura = largura;
}

void Tela::setAltura( double altura ) {
	if ( altura < 0 )
		Tela::altura = 0;
	else
		Tela::altura = altura;
}

double Tela::getLargura() {
	return largura;
}

double Tela::getAltura() {
	return altura;
}

void Tela::leLargura() {
	double largura;
	
	cout << "Largura: ";
	cin >> largura;
	
	setLargura( largura );
}

void Tela::leAltura() {
	double altura;
	
	cout << "Altura: ";
	cin >> altura;
	
	setLargura( altura );
}
