#include <stdio.h>
#include <stdlib.h>

int main()
{

    char banda[3][250];
    int i, j;
    char integrantes[5][3];

    for (i = 0; i < 3; i++){
        printf("Nome da banda: ");
        scanf("%s", &banda[i]);

fflush(stdin);

        for (j = 0; j < 5; j++){
            printf("nome do %d integrante: ", j+1);
            scanf("%s", &integrantes[j]);
            
            fflush(stdin);
        }


        printf("\n");
    }

    system("cls || clear");

    for (i = 0; i < 3; i++){
        printf("\n\nNome Da banda:%s \n\n", banda[i]);

        for (j = 0; j < 5; j++){
            printf("\n\n%d integrante:%s \n\n", j+1, integrantes[i][j]);

        }
    
}

        

    return 0;
}