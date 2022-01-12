#include <stdio.h>

double max=0.0, min=999.0, sum=0.0, ave=0.0;
int over50=0, over10=0;

/*-------------------------------------------------------------------
    Analyze
    ====
    集計を行う
---------------------------------------------------------------------*/
void Analyze(int point)
{
    if (max < point)
        max = point;
    if (min > point)
        min = point;
    
    if (point >= 50)
        over50++;
    else if (point >= 10)
        over10++;
}

/*-------------------------------------------------------------------
    ClacAve
    ====
    平均値を計算
---------------------------------------------------------------------*/
double ClacAve(int people)
{
    return sum / (double)people;
}

/*-------------------------------------------------------------------
    PrintResult
    ====
    結果の表示する
---------------------------------------------------------------------*/
void PrintResult()
{
    printf("最大値=%6.1f\n",  max);
    printf("最小値=%6.1f\n",  min);
    printf("合計点=%6.1f\n",  sum);
    printf("平均点=%6.1f\n",  ave);
    printf("50点以上の人数=%d\n",  over50);
    printf("10点以上50点未満の人数=%d\n",  over10);
}

int main(void)
{
    int people=0, point=0;

    printf("人数は何人ですか= ");
    scanf("%d", &people);

    for (int i=0; i < people; i++)
    {
        printf("%d人目の得点= ", i+1);
        scanf("%d", &point);

        Analyze(point);
    }

    ClacAve(people);
    PrintResult();

    return 0;
}