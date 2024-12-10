#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}Titik;

float jarak(Titik P1, Titik P2);

float jarak(Titik P1, Titik P2){
    float d;
    d = sqrt((P1.x - P2.x)*(P1.x - P2.x) + (P1.y - P2.y)*(P1.y - P2.y));
    return d;
}

#ifndef JARAK2TITIK_H
#define JARAK2TITIK_H

#endif //JARAK2TITIK_H
