#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float a;
    float b;
    float t;
}sgt;

float Luassegitiga(sgt alas, sgt tinggi);
float Kelilingsegitiga(sgt alas, sgt samping);

float Luassegitiga(sgt alas, sgt tinggi){
    float l;
    l = 0.5 * alas.a * tinggi.t;
    return l;
}

float Kelilingsegitiga(sgt alas, sgt samping) {
    float k;
    k = alas.a + (2 * samping.b);
    return k;
}

#ifndef LUASSEGITIGASAMAKAKI_H
#define LUASSEGITIGASAMAKAKI_H

#endif //LUASSEGITIGASAMAKAKI_H
