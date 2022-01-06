#include <stdio.h>>

/*-------------------------------------------------------------------
    結果を格納する構造体
    ======
    sum:合計
    pro:総乗
    ave:平均
---------------------------------------------------------------------*/
typedef struct Result
{
    int sum;
    int pro;
    double ave
} Result;

/*-------------------------------------------------------------------
    Result構造体の初期化
---------------------------------------------------------------------*/
Result ResultInit()
{
    Result _result = {0, 1, 0.0};
    return _result;
}

int main(void)
{
    // 構造体の作成
    Result result = ResultInit();

    // 総和・総乗を行う
    for (int i=0; i<10; i++)
    {
        result.sum += i+1;
        result.pro *= i+1;
    }

    // 平均の計算
    result.ave = (double)result.sum / 10.0;
}