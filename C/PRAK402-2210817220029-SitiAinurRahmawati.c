#include <stdio.h>
int main () {
    int angka, i;
    scanf("%d", &angka);
    for(i=1;i<=angka;i++){
        if (i%2!=0) {
            printf("%d ", i);}
        else {
            continue;} 
    } 
    printf("\n");
    for(i=angka;i>0;i--){
        if (i%2==0) {
            printf("%d ", i);}
        else {
            continue;}
    }
}