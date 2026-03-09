#include <stdio.h>

int toplam(int n) {
if (n == 0){
    return 0;
}
else {
    return n + toplam(n-1);
}
}
int main (){
    int kullanici_sayisi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &kullanici_sayisi);
    int sonuc = toplam(kullanici_sayisi);
    printf("1'den %d'e kadar olan sayilarin toplami: %d\n", kullanici_sayisi,sonuc);
    return 0;


}


