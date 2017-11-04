#include <iostream>
#include <SDL/SDL.h>


using namespace std;

class Perso {

   private:
SDL_Rect x;
SDL_Rect y;
int unit_move;
//int identifiant;

  public :


SDL_Rect getX(){return x;}
SDL_Rect getY(){return y;}
int getUnit_Move(){return unit_move;}
//int getIdentifiant(){return identifiant;} 
void setX(SDL_Rect x){this->getX()=x;}
void setY(SDL_Rect y){this->getY()=y;}
void setUnit_Move(int unit_move){this->unit_move=unit_move;}
//void setIdentifiant(int identifiant){this->identifiant=identifiant}//useless but it's only to test the git commands , thank you
 Perso(){unit_move=0;}
 Perso(SDL_Rect x , SDL_Rect y , int unit_move);
 void afficher();
 


};
