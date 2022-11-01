#include <stdio.h>
int main () {
    int awal, akhir, i, a;
    scanf("%d %d", &awal, &akhir);
    a=akhir;
    if (awal<akhir) {
        for (i=awal;i<=akhir;i++) {
            printf("%d ",i);
            if (a>awal) {
                printf("%d - ",a);}
            else {
                printf("%d ",a);}
            a=a-1;} 
    }
    else if (awal>akhir) {  
        for (i=awal;i>=akhir;i--) {
            printf("%d ", i);
            if (a<awal) {
                printf("%d - ",a);} 
            else {
                printf("%d ",a);}
            a=a+1;}
    }
}