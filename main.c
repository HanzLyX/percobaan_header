#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "Jarak2Titik.h"
#include "LuasSegitigaSamaKaki.h"
#include "luaspersegi.h"
#include "luaslingkaran.h"

jarakduatitik(){
    Titik P1, P2;
    float d;

    printf("Titik P1 : \n");
    printf(" x = ");
    scanf("%f", &P1.x);
    printf(" y = ");
    scanf("%f", &P1.y);

    printf("Titik P2 : \n");
    printf(" x = ");
    scanf("%f", &P2.x);
    printf(" y = ");
    scanf("%f", &P2.y);

    d = jarak(P1, P2);
    printf("Jarak antara P1(%.2f,%.2f) dan P2(%.2f,%.2f) adalah : %.2f \n", P1.x, P1.y, P2.x, P2.y, d);
    getch();
}

segitiga() {
    printf("[[Menghitung Luas dan Keliling Segitiga Sama Kaki]]\n");
    sgt alas, tinggi, samping;
    float k, l;

    printf("Masukan Alas: ");
    scanf("%f", &alas.a);
    printf("Masukan Samping: ");
    scanf("%f", &samping.b);
    printf("Masukan Tinggi: ");
    scanf("%f", &tinggi.t);

    k = Kelilingsegitiga(alas, samping);
    l = Luassegitiga(alas,tinggi);

    printf("\nLuas = %.2f", l);
    printf("\nKeliling = %.2f", k);
    getch();
}

persegi() {
    printf("[[Menghitung Luas dan Keliling Persegi]]\n");
    prsg sisi;
    float k, l;

    printf("Masukan Panjang Sisi Persegi: ");
    scanf("%f", &sisi.s);

    k = Kelilingpersegi(sisi, k);
    l = Luaspersegi(sisi, l);

    printf("\nLuas = %.2f", l);
    printf("\nKeliling = %.2f", k);
    getch();
}

lingkaran() {
    printf("[[Menghitung Luas dan Keliling Lingkaran]]\n");
    lngkrn jari;
    float k, l;

    printf("Masukan Panjang Jari-Jari Lingkaran: ");
    scanf("%f", &jari.r);

    k = Kelilinglingkaran(jari, l);
    l = Luaslingkaran(jari, k);

    printf("\nLuas = %.2f", l);
    printf("\nKeliling = %.2f", k);
    getch();
}

main() {
    int pilihan;
    printf("1. Jarak Dua Titik \n2. Luas Segitiga \n3. Luas Persegi \n4. Luas Lingkaran \nMasukan Pilihan: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        jarakduatitik();
    }
    else if (pilihan == 2) {
        segitiga();
    }
    else if (pilihan == 3) {
        persegi();
    }
    else if (pilihan == 4) {
        lingkaran();
    }
    getch();
}