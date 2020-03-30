#include <iostream>

#include "Ponto3D.h"

using namespace std;

Ponto3D::Ponto3D( double x, double y, double z ) :
	Ponto2D( x, y )
{
	setZ( z );
}
	
void Ponto3D::setZ( double z ) {
	Ponto3D::z = z;
}
	
double Ponto3D::getZ() const {
	return z;
}

// Lê o valor de z da entrada padrão	
void Ponto3D::leZ() {
	double z;
	
	cin >> z;
	setZ( z );
}

// Lê um ponto no R3 no formato (x, y, z) da entrada padrão
void Ponto3D::lePonto() {
	cout << "Digite o ponto no formato (x, y, z): ";
	// Ignora '('
	cin.ignore();
	// Lê o valor de x
	leX();
	// Ignora ','
	cin.ignore();
	// Lê o valor de y
	leY();
	// Ignora ','
	cin.ignore();
	// Lê o valor de z
	leZ();
	// Ignora ')'
	cin.ignore();
}
	
// Exibe um ponto no R3 no formato (x, y, z) através da saída padrão
void Ponto3D::exibePonto() const {
	cout << '(' << getX() << ", " << getY() << ", " << getZ() << ")";
}
