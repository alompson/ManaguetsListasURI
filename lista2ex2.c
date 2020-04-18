#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int n , i, j, cont, caso, v[61];
    scanf ("%lld", &cont);
    for (j = 0; j < cont; j++){

            scanf("%lld", &caso);
            if (caso >= 0 && caso <= 60)
            {
                v[0] = 0;
                v[1] = 1;
                v[2] = 1;
                for (i = 2; i <= caso; i++)
                {
                    v[i] = v[i-1] + v[i-2];
                }
                printf ("Fib(%lld) = %lld\n", caso, v[caso]);
            }
            else
            {
            return(0);
            }
        }
return(0);
}
