#ifndef PONTO2D_H
#define PONTO2D_H

class Ponto2D {
public:
	Ponto2D( double x = 0, double y = 0 );
	void setX( double );
	void setY( double );
	double getX() const;
	double getY() const;
	void leX();
	void leY();
	void lePonto();
	void exibePonto() const;
private:
	double x;
	double y;
};

#endif
