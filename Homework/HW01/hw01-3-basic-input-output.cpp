#include <stdio.h>
int main() {
    char firstName1[50];
    char lastName1[50];
    printf("First Name: ");
    scanf("%s", firstName1);

    printf("Last Name: ");
    scanf("%s", lastName1);
    
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", firstName1, lastName1);
    
    char firstName2[50];
    char lastName2[50];

    printf("First Name: ");
    scanf("%s", firstName2);

    printf("Last Name: ");
    scanf("%s", lastName2);

    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", firstName2, lastName2);

    return 0;
}