#include "Fantasma.h"
#include <iostream>

using namespace std;

//Fantasma::Fantasma(SDL_Renderer* _renderer, SDL_Texture* _fantasmaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron):
//	GameObject(_posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla)
//{
//	// Inicializa propiedade de de pacman
//	velocidadX = 0;
//	velocidadY = 0;
//	velocidadPatron = _velocidadPatron;
//	renderer = _renderer;
//	fantasmaTexture = _fantasmaTexture;
//	
//}

Fantasma::Fantasma(Texture* _fantasmaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron) :
	GameObject(_posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla)
{
	// Inicializa propiedade de de pacman
	velocidadX = 0;
	velocidadY = 0;
	numeroAnimacion = 0;
	velocidadPatron = _velocidadPatron;
	fantasmaTexture = _fantasmaTexture;
}

void Fantasma::move()
{
	if (getPosicionX() >= posicionXDestino) {
		if (getPosicionY() >= posicionYDestino) {

			posicionXDestino = 1 + rand() % getAnchoPantalla();
			posicionYDestino = 1 + rand() % getAltoPantalla();

			if (getPosicionX() > posicionXDestino) {
				incrementoPosicionX = -1;
			}
			else
			{
				incrementoPosicionX = -1;
			}

			if (getPosicionY() > posicionXDestino) {
				incrementoPosicionY = 1;
			}
			else
			{
				incrementoPosicionX = 1;
			}
		}
		else {
			setPosicionY(getPosicionY() + incrementoPosicionY);

			// Mover el fantasma arriba o abajo
			setPosicionY(getPosicionY() + velocidadY);

			// Verificar si la posicion del fantasma no salio de los bordes superior e inferior
			if ((getPosicionY() < 0) || (getPosicionY() + getAlto() > getAltoPantalla()))
			{
				// Mover fantasma atras
				setPosicionY(getPosicionY() - velocidadY);
			}
		}
	}
	else {
		setPosicionX(getPosicionX() + incrementoPosicionX);

		// Mover el fantasma a la izquierda o derecha
		setPosicionX(getPosicionX() + velocidadX);

		// Verificar si la posicion del fantasma no salio de los bordes izquierdo o derecho
		if ((getPosicionX() < 0) || (getPosicionX() + getAncho() > getAnchoPantalla()))
		{
			// Mover fantasma atras
			setPosicionX(getPosicionX() - velocidadX);
		}
	}

}

void Fantasma::render()
{
	numeroAnimacion++;
	if (numeroAnimacion >= 4)
		numeroAnimacion = 0;

	SDL_Rect renderQuad = { 25 * numeroAnimacion, 0, getAncho(), getAlto() };

	//Render to screen
	fantasmaTexture->render(getPosicionX(), getPosicionY(), &renderQuad);
	//SDL_RenderCopyEx(renderer, fantasmaTexture, NULL, &renderQuad, 0.0, NULL, SDL_FLIP_NONE);
}