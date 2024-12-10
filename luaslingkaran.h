#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


#define pi 3.14
typedef struct {
    float r;
} lngkrn;

float Luaslingkaran(lngkrn jari, float l);
float Kelilinglingkaran(lngkrn jari, float k);

float Luaslingkaran(lngkrn jari, float l){
    return l = pi * jari.r * jari.r;
}

float Kelilinglingkaran(lngkrn jari, float k){
    return k = 2 * pi * jari.r;

}

#ifndef LUASLINGKARAN_H
#define LUASLINGKARAN_H

#endif //LUASLINGKARAN_H
