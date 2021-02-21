#include <iostream>
#include <vector>
#include <string>
using namespace std ;
typedef struct  {
    int x ;
    int y ;
}position ;
typedef struct position ;
class personne {
private:
    position p ;
    vector<SDL_Surface>image ;
public:
    void set_position(int X , int Y) {
        p.x = X ;
        p.y = Y ;
    }
    int getPosition_X() {
        return p.x ;
    }
    int getPosition_Y() {
        return p.y ;
    }
    void setImage(SDL_Surface imagevr ){
        image = imagevr ;
    }
    personne operator+=(position &PP) {
        p.x+= PP.x ;
        p.y=PP.y ;
    }
    personne operator-=(position &PP) {
        p.x -= PP.x;
        p.y -= PP.y;
    }
    void stepforward(int direction , int click ) {
        switch (direction ) {
            case 1 :
                break ;



            default:
                break ;

        };

    }
};
