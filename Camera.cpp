#include <iostream>

#include "Camera.h"

using namespace std;

Camera::Camera( double f, double larguraTelaProj, double alturaTelaProj ) :
	telaProj( larguraTelaProj, alturaTelaProj )
{
	setF( f );
	setOrigemTelaProj();
}
	
void Camera::setF( double f ) {
	if ( f < 0 )
		Camera::f = 0;
	else
		Camera::f = f;
}

void Camera::setOrigemTelaProj() {
	origemTelaProj.setX( - ( telaProj.getLargura() / 2 ) );
	origemTelaProj.setY( - ( telaProj.getAltura() / 2 ) );
}
	
double Camera::getF() {
	return f;
}
	
void Camera::leF() {
	double f;
	
	cin >> f;
	setF( f );
}

void Camera::leLarguraTelaProj() {
	double largura;
	
	cin >> largura;
	telaProj.setLargura( largura );
}

void Camera::leAlturaTelaProj() {
	double altura;
	
	cin >> altura;
	telaProj.setAltura( altura );
}

void Camera::leCamera() {
	cout << "Distância focal(f): ";
	leF();
	cout << "Largura da tela de projeção: ";
	leLarguraTelaProj();
	cout << "Altura da tela de projeção: ";
	leAlturaTelaProj();
	
	setOrigemTelaProj();
}
	
Ponto3D Camera::getPontoProjetado( const Ponto3D& p ) {
	Ponto3D pProj;
	
	if ( p.getZ() < getF() )
		return pProj;
	
	double lambda = getF() / p.getZ();
	
	pProj.setX( lambda * p.getX() );
	pProj.setY( lambda * p.getY() );
	pProj.setZ( getF() );
	
	return pProj;
}

Ponto2D Camera::getPontoTelaProj( const Ponto3D& p ) {
	Ponto3D pProj;
	Ponto2D pTelaProj;
	
	pProj =  getPontoProjetado( p );
	
	double xTela = pProj.getX() - origemTelaProj.getX(),
		   yTela = -pProj.getY() - origemTelaProj.getY();
		   
	pTelaProj.setX( ( xTela >= 0 && xTela <= telaProj.getLargura() ) ? xTela : 0 );
	pTelaProj.setY( ( yTela >= 0 && yTela <= telaProj.getAltura() ) ? yTela : 0 );
	
	return pTelaProj;
}
	
void Camera::exibeCamera() {
	cout << "f = " << getF() << endl <<
	"Tela de projeção:" << endl <<
	" Largura = " << telaProj.getLargura() << endl <<
	" Altura = " << telaProj.getAltura();
}
