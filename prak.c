#include <stdio.h>

//Luas permukaan = (2 x luas alas) + (Luas selimut)
//Volume = Luas alas x tinggi prisma
//Luas alas = a x t / 2
//Luas selimut = (a + b + c) x tinggi prisma
//a = panjang sisi alas pertama
//b = panjang sisi alas kedua
//c = panjang sisi alas ketiga
//t = tinggi segitiga
//h = tinggi prisma

float volprismasegitiga (float a, float t, float h) {
    float luas_alas = a * t / 2;
    return luas_alas * h;
}

float lpprismasegitiga (float a, float b, float c, float t, float h) {
    float luas_alas = a * t / 2;
    float luas_selimut = (a + b + c) * h;
    return (2 * luas_alas) + luas_selimut;
}
void Prisma(){
    float a, b, c, t, h;
    int pilihan;
    float hasil;

    printf("\nPILIHLAH YANG INGIN ANDA HITUNG: \n");
    printf("1 = Hitung Volume Prisma Segitiga\n");
    printf("2 = Hitung Luas Permukaan Prisma Segitiga\n");
    printf("Masukkan pilihan Anda (1/2): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("\nMasukkan nilai panjang alas segitiga: ");
        scanf("%f", &a);
        printf("Masukkan nilai tinggi segitiga: ");
        scanf("%f", &t);
        printf("Masukkan nilai tinggi prisma: ");
        scanf("%f", &h);

        hasil = volprismasegitiga (a, t, h);
        printf("Volume Prisma Segitiga Adalah: %.2f\n", hasil);

    } else if (pilihan == 2) {
        printf("\nMasukkan nilai panjang alas segitiga: ");
        scanf("%f", &a);
        printf("Masukkan nilai panjang sisi segitiga kedua: ");
        scanf("%f", &b);
        printf("Masukkan nilai panjang sisi segitiga ketiga: ");
        scanf("%f", &c);
        printf("Masukkan nilai tinggi segitiga: ");
        scanf("%f", &t);
        printf("Masukkan nilai tinggi prisma: ");
        scanf("%f", &h);

        hasil = lpprismasegitiga (a, b, c, t, h);
        printf("Luas Permukaan Prisma Segitiga Adalah = %.1f\n", hasil);
        
    } 
}

//Volume Kerucut = 1/3 x phi x r x t
//Luas Permukaan = phi x r (r + s)
//phi = 3.14
//r = jari-jari kerucut
//t = tinggi kerucut
//s = jarak antara titik pusat kerucut dan titik di permukaan
float volkerucut (const float phi, float r, float t){
    float luas = phi * r * t;
    return luas;
}   

float lpkerucut (const float phi, float r, float s){
    float luasselimut = r + s;
    return phi * r * luasselimut;

}   
void Kerucut(){
    const float phi = 3.14;
    float r, s, t;
    int pilihan;
    float hasil;

    printf("\nPILIHLAH YANG INGIN ANDA HITUNG: \n");
    printf("1 = Hitung Volume Kerucut\n");
    printf("2 = Hitung Luas Permukaan Kerucut\n");
    printf("Masukkan pilihan Anda (1/2): ");
    scanf("%d", &pilihan);

    if (pilihan == 1){
        printf("\nMasukkan nilai jari - jari alas: ");
        scanf("%f", &r);
        printf("Masukkan nilai tinggi kerucut: ");
        scanf("%f", &t);
        
        hasil = volkerucut (phi, r, t);
        printf("Volume Kerucut Adalah: %.2f\n", hasil);

    } else if (pilihan == 2) {
        printf("\nMasukkan nilai jari-jari alas: ");
        scanf("%f", &r);
        printf("Masukkan nilai tinggi prisma: ");
        scanf("%f", &s);

        hasil = lpkerucut (phi, r, s);
        printf("Luas Permukaan Kerucut Adalah = %.1f\n", hasil);

    }
}
    int main(){

    int prisma = 1;
    int kerucut = 2;
    int bangunan;

    do{
    printf("\n=======================\n");
    printf("MENGHITUNG BANGUN RUANG");
    printf("\n=======================");
    printf("\n1 = PRISMA \n");
    printf("2 = KERUCUT\n");
    printf("=======================");
    printf("\n=> PILIHLAH JENIS BANGUNAN YANG AKAN ANDA HITUNG: ");
    scanf("%d", &bangunan);

    if (bangunan == 1){
        Prisma();
    } else if (bangunan == 2){
        Kerucut();
    } else {
        printf("=== PILIHAN TIDAK VALID!!! ===\n");
    }
        printf("\nAPAKAH ANDA INGIN MENGULANGI PERHITUNGAN? [1/0] ");
        int ulang;
        scanf("%d", &ulang);

        if (ulang != 1) {
            break;

    }   

    } while (1);

}