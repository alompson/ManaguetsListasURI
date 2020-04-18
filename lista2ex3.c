#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[12][12], total = 0.0;
    int col, i, j;
    char operac;
    scanf("%d", &col);
    scanf("%c", &operac);
    operac = getchar();
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
        scanf("%f", &v[i][j]);
        }
    }
    switch (operac){
    case ('S'):

        for (i = 0; i < 12; i ++)
        {
            total = total + v[i][col];
        }
        printf ("%.1f\n", total);
        break;

    case ('M'):

        for (i = 0; i < 12; i ++)
        {
            total = total + v[i][col];
        }
        total = total/12;
        printf ("%.1f\n", total);
        break;
    }
}

