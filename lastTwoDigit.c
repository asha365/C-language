#include<stdio.h>
int main(){
    int xxxxx,xxx;
    printf("Enter a digits:");
    scanf("%d",&xxxxx);

    xxx = xxxxx % 100;
    printf("Last two digits is: %02d",xxx);

return 0;
}
