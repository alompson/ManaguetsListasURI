#include <stdio.h>

int main(){
    int v, a[10], i;
    scanf ("%d", &v);
    if (v < 50){
    a[0] = v;
    printf ("N[0] = %d\n", v);
        for (i = 1; i < 10; i++){
        a[i] = a[i-1]*2;
        printf ("N[%d] = %d\n", i, a[i]);
        }
    }
}
