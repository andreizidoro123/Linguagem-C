#include<stdio.h>

int main() 
{
    char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int num;
    
    scanf("%d", &num);
    
    if (num > 26 || num < 1) {
        printf("VSF BAN\n");
    } else {
        for (int i = 0; i < num; i++) {
            printf("%c", alfabeto[i]);
        }
    }
    return 0;
}
