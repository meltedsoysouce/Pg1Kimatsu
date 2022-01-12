#include <stdio.h>

/*-------------------------------------------------------------------
    DrawSteps
    ====
    階段を描画する
---------------------------------------------------------------------*/
void DrawSteps(int layers)
{
    for(int i=0; i<layers; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }

        // if (i == 2)
        //     printf("s");
        printf("%c\n", (i==2) ? 's' : ' ');
    }

    printf("\n"); // 見た目を整えるために改行
}

int main(void)
{
    int layers=0;

    printf("階段は何段にしますか？= ");
    scanf("%d", &layers);

    DrawSteps(layers);

    return 0;
}