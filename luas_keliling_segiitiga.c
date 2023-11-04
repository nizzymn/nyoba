#include <stdio.h>
#include <math.h>

void segitiga_sembarang(int side1, int side2, int side3, int s) {
    s = ( (side1 + side2 + side3) * 0.5 );
    double luas = sqrt ( s * (s - side1) * (s - side2) * (s - side3));
    double keliling = ( side1 + side2 + side3 );
    printf("LUAS SEGITIGA : %lf", luas);
    printf("\nKELILING SEGITIGA : %lf", keliling);
}
void belah_ketupat(int side1, int d1, int d2) {
    double luas = ( (d1 * d2 )/2 );
    double keliling = ( side1 * 4);
    printf("LUAS BELAH KETUPAT : %lf", luas);
    printf("\nKELILING BELAH KETUPAT : %lf", keliling);
}

int main() {
    char pilih_bangun_datar;
    
    int side1,side2,side3,s,d1,d2,luas,keliling;
    printf("Masukkan angka untuk memilih bangun datar!!!\n");
    printf("=====PILIH JENIS BANGUN DATAR===== \n1.Segitiga sembarang \n2.Belah ketupat\n");
    printf("Pilihan anda : ");
    scanf("%c",&pilih_bangun_datar);

    switch(pilih_bangun_datar){
    
    case '1':
        printf("masukkan side 1: ");
        scanf("%d",&side1);
        printf("masukkan side 2: ");
        scanf("%d",&side2);
        printf("masukkan side 3: ");
        scanf("%d",&side3);
        segitiga_sembarang(side1,side2,side3,s);
        break;
    case '2':
        printf("masukkan sisi belah ketupat: ");
        scanf("%d",&side1);
        printf("masukkan diagonal 1: ");
        scanf("%d",&d1);
        printf("masukkan diagonal 2: ");
        scanf("%d",&d2);
        belah_ketupat(side1,d1,d2);
        break;
    default:
        printf("Pilihan Tidak Valid");
        break;
    }
    return 0;
}


