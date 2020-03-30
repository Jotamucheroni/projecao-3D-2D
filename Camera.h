#ifndef CAMERA_H
#define CAMERA_H

#include "Ponto2D.h"
#include "Ponto3D.h"
#include "Tela.h"

class Camera {
public:
	Camera( double f = 0, double larguraTelaProj = 2, double alturaTelaProj = 2);
	void setF( double f );
	double getF();
	void leF();
	void leLarguraTelaProj();
	void leAlturaTelaProj();
	void leCamera();
	Ponto3D getPontoProjetado( const Ponto3D& p );
	Ponto2D getPontoTelaProj( const Ponto3D& p );
	void exibeCamera();
private:
	double f;
	Tela telaProj;
	Ponto2D origemTelaProj;
	
	void setOrigemTelaProj();
};

#endif
