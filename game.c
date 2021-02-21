#include "SDL/SDL.h"
#include <stdlib.h>
#include <stdio.h> //include <SDL/SDL_image>
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include <SDL/SDL_ttf.h>





int main() {
    SDL_Surface *ecran = NULL, *zozor = NULL , *menu = NULL , *texte = NULL , *un = NULL , *deux= NULL , *trois = NULL ;
    SDL_Rect positionZozor , positionmenu  , postexte , position_bouton ;
    SDL_Event event; TTF_Font *police = NULL;
    int continuer = 1;
    SDL_Color couleurNoire = {0, 0, 0};
   un = IMG_Load("1.jpg");
   deux = IMG_Load("2.jpg");
   //  trois = IMG_Load("3.jpg");

   int x = 1 ;
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init() ;  // initialisation de ttf
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) ;
     ecran = SDL_SetVideoMode(1000, 1000  , 32, SDL_HWSURFACE  |SDL_DOUBLEBUF ) ;
    SDL_WM_SetCaption("the fury ", NULL);
    menu = IMG_Load("1.jpg");
  Mix_Chunk *music , *click ;//Créer un pointeur pour stocker un .WAV

   Mix_AllocateChannels(4)  ;
  music = Mix_LoadWAV("music.wav"); //Charger un wav dans un pointeur
  click = Mix_LoadWAV("aa.wav");
  police = TTF_OpenFont("a.ttf", 65); // chargement de police
  postexte.x = 0 ;
  postexte.y = 0 ;
  texte = TTF_RenderText_Blended(police, "the best game ever ", couleurNoire);
  Mix_PlayChannel(1, music, 100);
  Mix_VolumeChunk(music, MIX_MAX_VOLUME/4);


    while (continuer)
    {

        SDL_WaitEvent(&event);
        switch(event.type) {
            case SDL_QUIT:
                continuer = 0;
                break;

            case SDL_KEYDOWN:
                switch(event.key.keysym.sym) {
                    case SDLK_UP: // Flèche haut
                        if ( x == 1  ) {
                         //   menu = trois ;
                         x = 2 ;
                          Mix_Pause(1);
                          Mix_PlayChannel(2,click,1) ;
                          Mix_Resume(1);
                        }
                        if (x == 2 ) {
                         //    menu = un ;
                           Mix_Pause(1);
                           Mix_PlayChannel(2,click,1) ;
                           Mix_Resume(1);
                           x = 1 ;
                        }


                        break;
                    case SDLK_DOWN: // Flèche bas
                        if (x ==  1  ) {
                          menu = deux ;
                           // Mix_Pause(1);
                          Mix_PlayChannel(2,click,1) ;
                          Mix_Resume(1);
                          x = 2 ;
                          printf("sdf\n" );
                        }
                        if (x == 2 ) {
                         //   menu == trois ;
                          Mix_Pause(1);
                          Mix_PlayChannel(2,click,1) ;
                          Mix_Resume(1);
                          x = 1 ;
                          printf("sdfg\n" );
                        }

                        break;






                    case SDLK_RIGHT: // Flèche droite
                    if ( x== 1 ) {
                    printf("dssdfdg\n" );
                    Mix_Pause(1) ;
                    system("/home/gdahboy/branches/commande.sh");
                    Mix_Resume(1) ; 
                  }
                        break;
                    case SDLK_LEFT: // Flèche gauche

                        break;
                }
                break;
        }
        switch (x) {
          case 1 :
          menu = un  ;
          break ;
          case 2 :
          menu = deux  ;
          break ;

        }


        /* On efface l'écran */
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        /* On place Zozor à sa nouvelle position */

        SDL_BlitSurface(menu , NULL , ecran , &positionmenu) ;
        //SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);
        //SDL_BlitSurface(texte , NULL , ecran , &postexte) ;
        /* On met à jour l'affichage */
        SDL_Flip(ecran);
    }

    SDL_FreeSurface(zozor);
    SDL_Quit();

    return EXIT_SUCCESS;
}
