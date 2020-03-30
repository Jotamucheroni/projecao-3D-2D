#include <iostream>

#include "Ponto2D.h"
#include "Ponto3D.h"
#include "Camera.h"

using namespace std;

int main() {
	// Um ponto no espaço tridimensional, no espaço da câmera
	Ponto3D p;
	Camera c;
	
	cout << "Projeção 3D -> 2D"
	<< endl << endl <<
	"Este programa faz a projeção de um ponto 3D definido no sistema de coordenadas de uma câmera pinhole no plano de projeção "
	"perspectiva desta câmera. Em seguida, calcula-se também a posição deste ponto nos sistema de coordenadas da imagem gerada "
	"pela projeção. As coordenadas da imagem se iniciam em seu canto superior esquerdo (direção (-x,y) na coordenadas da câmera) "
	"e terminam em seu canto inferior direito (direção (x,-y) na coordenadas da câmera) e o seu centro é o centro da visão da "
	"câmera, que aponta na direção positiva do eixo z. O usuário deve informar a distância focal da câmera e a altura e largura "
	"da imagem a ser gerada"
	<< endl << endl;
	
	cout << "Informe os parâmetros da câmera e da imagem" << endl;
	c.leCamera();
	cout << endl;
	cin.ignore();	
	
	cout << "Informe agora quantos pontos 3D desejar no sistema de coordenadas da câmera. A cada ponto informado, será calculada "
	"a sua projeção no plano de imagem, ainda no sistema de coordenadas da câmera, e sua posição no sistema de coordenadas da imagem"
	<< endl << endl;
	
	// Leitura do ponto do espaço 
	while ( true ) {
		p.lePonto();
		cout << "Ponto projetado no plano de projeção: ";
		c.getPontoProjetado( p ).exibePonto();
		cout << endl;
		cout << "Ponto nas coordenadas da imagem: ";
		c.getPontoTelaProj( p ).exibePonto();
		cout << endl;
		cin.ignore();
	}
}
