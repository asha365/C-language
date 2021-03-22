#include<stdio.h>
int main(){
    float height, width;
    float area;
    printf("Enter height and width triangle: ");
    scanf("%f%f",&height,&width);

    area = 0.5*height*width;
    printf("Area of triangle is:%.3f",area);
return 0;
}
