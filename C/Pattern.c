#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
            printf("01");
        printf("\n");
    }
    return 0;
}
