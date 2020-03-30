#include <iostream>

#include "Ponto2D.h"

using namespace std;

Ponto2D::Ponto2D( double x, double y ) {
	setX( x );
	setY( y );
}

void Ponto2D::setX( double x ) {
	Ponto2D::x = x;
}
	
void Ponto2D::setY( double y ) {
		Ponto2D::y = y;
}

double Ponto2D::getX() const {
	return x;
}
	
double Ponto2D::getY() const {
	return y;
}

// Lê o valor de x da entrada padrão
void Ponto2D::leX() {
	double x;
	
	cin >> x;
	setX( x );
}

// Lê o valor de y da entrada padrão	
void Ponto2D::leY() {
	double y;
	
	cin >> y;
	setY( y );
}

// Lê um ponto no R2 no formato (x, y) da entrada padrão
void Ponto2D::lePonto() {
	cout << "Digite o ponto no formato (x, y): ";
	// Ignora '('
	cin.ignore();
	// Lê o valor de x
	leX();
	// Ignora ','
	cin.ignore();
	// Lê o valor de y
	leY();
	// Ignora ')'
	cin.ignore();
}

// Exibe um ponto no R2 no formato (x, y)
void Ponto2D::exibePonto() const {
	cout << '(' << getX() << ", " << getY() << ")";
}
