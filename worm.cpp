
#include "worm.hpp"
#include "WormPosition.hpp"

Worm::Worm()
{
	direction = LOOKRIGHT;
}
void Worm::updateWorm()          //se llama en respuesta a eventos de timer
{
	if(currentState == WALKING)
	{
//		position = updatePosition(); //esta función todavía no existe pero ya va a existir
		//al_draw_bitmap(bitmap correspondiente a walking en el tick counter indicado, position)
	}
	else if(currentState == JUMPING)
	{
		//position = updatePosition(); //esta función todavía no existe pero ya va a existir
		//al_draw_bitmap(bitmap correspondiente a jumping en el tick counter indicado, position)
	}
	if(currentState != STILL)// en still no hace falta incrementar tickCounter
	{
		frameCount++;
	}
}
void Worm::calcNewState(keyCode key) //se llama en respuesta a eventos de teclado
{
	switch (key)	 //actualizar el state si lo corresponde
	{
		case RIGHTKEY:
		{}
		case UPKEY:
		{}
		case LEFTKEY:
		{}
	}
}
Point Worm::getPosition() { return position; }
int Worm::getDirection(){return direction;}
wormState Worm::getCurrentState(){return currentState;}
int Worm::getFrameCount(){return frameCount;}
void Worm::setPosition(Point newPosition) {position = newPosition;}

