#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int Max2(int, int);
int Max3(int, int, int);
void tri_star(int);
int rand (void); //影片12-7 (void)-->表示不吃參數 (重點)
void dice(int);
int main()
{
    //影片12-1 函式定義要寫在函式呼叫之前，除非函式呼叫前有先寫函式宣告(重要)
    /*
    int f(int) ; <--函式宣告
    int main(){ f(4) } <--函式呼叫
    int f(int x) { return x+3;} <--函式定義
    */
    //影片12-2 C標準函式庫
    //字串處理<string.h>
    //數學運算<math.h>
    //輸入與輸出處理<stdio.h>
    //記憶體管理<stdlib.h>
    /*
    int N;
    printf("N = ");
    scanf("%d",&N);
    printf("%1f",sqrt(N));
    */
    //影片12-3 利用副程式做兩變數求最大值
    /*
    int x, y;
    printf("Please enter the first integer: ");
    scanf("%d",&x);
    printf("Please enter the second integer: ");
    scanf("%d",&y);
    printf("The maximum is %d",Max2(x,y));
    */
    //影片12-4 變數名稱可視範圍(重點)

    //影片12-5 使用函式，求三變數最大值
    /*
    int x, y, z;
    printf("Please enter the first integer: ");
    scanf("%d%d%d",&x, &y, &z);
    printf("The maximum is %d",Max3(x,y,z));
    */
    int N;
    printf("N = ");
    scanf("%d", &N);
    //tri_star(N);
    dice(N);
    return 0;
}

int Max2(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int Max3(int a, int b, int c)
{
    /*
    int max = a;
    if(b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
    */
    //利用Max2兜出Max3
    return Max2(Max2(a, b), c);
}
void tri_star(int a) //影片12-6 void作為回傳值型態時，表示該函式不回傳任何值，可省略return (重點)
{
    int i,j;
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= a; j++)
        {
            if( j <= i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    //return;
}
void dice(int a)
{
    int i;
    srand(time(0));
    for(i = 1; i <= a; i++)
    {
        printf("%d\n", (rand() % 6 +1));
    }
    return;
}
