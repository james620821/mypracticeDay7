#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int Max2(int, int);
int Max3(int, int, int);
void tri_star(int);
int rand (void); //�v��12-7 (void)-->��ܤ��Y�Ѽ� (���I)
void dice(int);
int main()
{
    //�v��12-1 �禡�w�q�n�g�b�禡�I�s���e�A���D�禡�I�s�e�����g�禡�ŧi(���n)
    /*
    int f(int) ; <--�禡�ŧi
    int main(){ f(4) } <--�禡�I�s
    int f(int x) { return x+3;} <--�禡�w�q
    */
    //�v��12-2 C�зǨ禡�w
    //�r��B�z<string.h>
    //�ƾǹB��<math.h>
    //��J�P��X�B�z<stdio.h>
    //�O����޲z<stdlib.h>
    /*
    int N;
    printf("N = ");
    scanf("%d",&N);
    printf("%1f",sqrt(N));
    */
    //�v��12-3 �Q�ΰƵ{�������ܼƨD�̤j��
    /*
    int x, y;
    printf("Please enter the first integer: ");
    scanf("%d",&x);
    printf("Please enter the second integer: ");
    scanf("%d",&y);
    printf("The maximum is %d",Max2(x,y));
    */
    //�v��12-4 �ܼƦW�٥i���d��(���I)

    //�v��12-5 �ϥΨ禡�A�D�T�ܼƳ̤j��
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
    //�Q��Max2�¥XMax3
    return Max2(Max2(a, b), c);
}
void tri_star(int a) //�v��12-6 void�@���^�ǭȫ��A�ɡA��ܸӨ禡���^�ǥ���ȡA�i�ٲ�return (���I)
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
