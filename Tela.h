#ifndef TELA_H
#define TELA_H

#include "Ponto2D.h"

class Tela {
public:
	Tela( double largura = 2, double altura = 2 );
	void setLargura( double largura );
	void setAltura( double altura );
	double getLargura();
	double getAltura();
	void leLargura();
	void leAltura();
private:
	double largura;
	double altura;
};

#endif
