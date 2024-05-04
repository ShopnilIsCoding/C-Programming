#include<stdio.h>
void print(int N)
{
    for (int i = 1; i <= N; i++)
    {
        int j=N-i;
        while (j--)
        {
            printf(" ");
        }
        int k=i;
        while (k>=1)
        {
            printf("%d",k);
            k--;
        }
        printf("\n");
        
        
    }
    
}
int main()
{
    int N;
    scanf("%d",&N);
    print(N);
    return 0;
}