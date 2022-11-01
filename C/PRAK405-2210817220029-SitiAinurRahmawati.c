#include <stdio.h>
int main () {
    int i, awal, akhir, hasil, hasil_1, a, hasil_2;
    hasil=0;
    scanf("%d %d", &awal, &akhir);
    for (i=1;i<=awal;i++) {
        hasil_2=0;
        for (a=i;a>=0;a--) {
            if (a==0) {
                printf("= %d\n", hasil_2);
            } else {
                hasil_1= a*akhir;
                if (a==1) {
                printf("(%d * %d) ", a, akhir);} 
                else {
                printf("(%d * %d) + ", a, akhir);
                }
            }
            hasil_1= a*akhir;
            hasil=hasil_1+hasil;
            hasil_2=hasil_1+hasil_2;}
    } printf("%d", hasil);
}