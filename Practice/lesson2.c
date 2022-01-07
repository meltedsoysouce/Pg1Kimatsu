#include <stdio.h>

/*-------------------------------------------------------------------
    Result
    ======
    結果を表す構造体
        ・max    :最大値
        ・min    :最小値
        ・sum    :合計
        ・ave    :平均
        ・over50 :50点以上の人数
        ・over10 :10点以上50点未満の人数
---------------------------------------------------------------------*/
typedef struct Result
{
    double max;
    double min;
    double sum;
    double ave;
    int over50;
    int over10;
} Result;

struct Result result;

/*-------------------------------------------------------------------
    initResult
    =====
    Result構造体の初期化
---------------------------------------------------------------------*/
void initResult()
{
    result.max=0.0;
    result.min=999.0;
    result.sum=0.0;
    result.ave=0.0;
    result.ave=0.0;
    result.over50=0;
    result.over10=0;
}

/*-------------------------------------------------------------------
    Analyze
    ====
    集計を行う
---------------------------------------------------------------------*/
void Analyze(int point)
{
    if (result.min > point)
        result.min = point;
    if (result.max < point)
        result.max = point;
    
    if (point>=50)
        result.over50++;
    else if(point>=10)
        result.over10++;

    result.sum += point;
}

/*-------------------------------------------------------------------
    ClacAve
    ====
    平均値を計算
---------------------------------------------------------------------*/
double CalcAve(int people)
{
    return result.sum / (double)people;
}

/*-------------------------------------------------------------------
    PrintResult
    ====
    結果の表示する
---------------------------------------------------------------------*/
void PrintResult()
{
    printf("最大値=%6.1f\n", result.max);
    printf("最小値=%6.1f\n", result.min);
    printf("合計点=%6.1f\n", result.sum);
    printf("平均点=%6.1f\n", result.ave);
    printf("50点以上の人数=%d\n", result.over50);
    printf("10点以上50点未満の人数=%d\n", result.over10);
}

int main(void)
{
    int people, point=0, i;
    initResult();

    printf("人数は何人ですか= ");
    scanf("%d", &people);

    for(i=0; i < people; i++)
    {
        printf("%d人目の得点= ", i+1);
        scanf("%d", &point);

        Analyze(point);
    }

    CalcAve(people);
    PrintResult();

    return 0;
}