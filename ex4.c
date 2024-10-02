#include <stdio.h>


typedef struct  {
    int x;
    int y;
}point;

int main() {
    point points;

    points.x = 7;
    points.y = 4;


    printf("les coordonnees du point est : x = %d , y = %d\n",  points.x , points.y );

    return 0;
}