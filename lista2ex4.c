#include <stdio.h>

void main(void){
    int ordem, lin, col, i;
    scanf("%d", &ordem);
    while(ordem != 0){
        int mat[ordem][ordem];
        for (lin = 0; lin < ordem; lin++)
        {
            printf ("  ");
            for (col = 0; col < ordem; col++)
            {
                for (i = 0; i < ordem/2; i++)
                {
                    if ((lin==i || lin==ordem-1) && (col==i || col==ordem-1))
                    {
                        mat[lin][col] = i+1;
                        printf ("%d  ", mat[lin][col]);
                        break;
                    }
                }
            }
        printf("\n");
        }
        printf ("\n\n");
        scanf("%d", &ordem);
    }
}






