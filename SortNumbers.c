#include<stdio.h>
int main(){

    int n1, n2, n3;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Enter the third number: ");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3 && n2>n3){
        printf("%d, %d, &d", n1, n2, n3);
    } else if (n1>n2 && n1>n3 && n3>n2){
        printf("%d, %d, %d", n1, n3, n2);
    } else if (n2>n1 && n2>n3 && n1>n3){
        printf("%d, %d, %d", n2, n1, n3);
    } else if (n2>n3 && n2>n1 && n3>n1){
        printf("%d, %d, %d", n2, n3, n1);
    } else if (n3>n2 && n3>n1 && n2>n1){
        printf("%d, %d, %d", n3, n2, n1);
    } else if (n3>n1 && n3>n2 && n1>n2){
        printf("%d, %d, %d", n3, n1, n2);
    }

    system("pause");
    return(0);
}
