#include <iostream>
#include "Perso.h"
using namespace std;




void afficher() {

  /* code */
  return "position x :"+getX()+"position y :"+getY()+"Numero de mouvement :"+getUnit_Move();
}

Perso (SDL_Rect x , SDL_Rect y , int unit_move){
this.x=x;
this.y=y;
this.unit_move=unit_move;

}
