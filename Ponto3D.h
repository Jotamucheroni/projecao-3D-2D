#ifndef PONTO_H
#define PONTO_H

#include "Ponto2D.h"

class Ponto3D : public Ponto2D {
public:
	Ponto3D( double x = 0, double y = 0, double z = 0 );
	void setZ( double );
	double getZ() const;
	void leZ();
	void lePonto();
	void exibePonto() const;
private:
	double z;
};

#endif
