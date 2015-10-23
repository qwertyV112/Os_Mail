#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <pthread.h>
#include <unistd.h>

#define N 8

struct Positions{
    int x, y;
};
struct Gorod{
    pthread_t Pid;
    struct Positions poz;
    struct Positions pozt;


};
struct Gorod gorod[N];

void creat(){
    int i,j,q=0;
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
            gorod[q].poz.x = 1+i*7;
            gorod[q].poz.y = 7+j*20;
            gorod[q].pozt.x =i; gorod[q].pozt.y =i;
                move(gorod[q].poz.x ,gorod[q].poz.y);
                addch('A');
                q++;
            }

    }

return;
}

struct Positions PozitionLoshad(struct Positions begins,struct Positions ends){
    if ( begins.x!=ends.x){
            if(begins.x>ends.y) begins.x--;
            else begins.x++;
    }
    if ( begins.y!=ends.y){
            if(begins.y>ends.y) begins.y--;
            else begins.y++;
    }
    return begins;
}



int main(){
     initscr();

     creat();
  //   refresh();
     endwin();
getch();
return 0;
}
