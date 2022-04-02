#include<stdio.h>

int rectangleArea(int l , int b){
    int ans  = l *b;
    return ans;
}

int squareArea(int side){
    return side*side;
}

float rightTriangleArea(int base , int height){
    return 0.5*base*height;
}

float circleArea(int r){
    return 3.14*r*r;
}

int main(){
    int length , breadth ;
    printf("rectangle:\n");
    printf("length :");
    scanf("%d", &length);
    printf("breadth :");
    scanf("%d", &breadth);

    printf("ans = %d\n\n" ,rectangleArea(length, breadth));

    int side ;
    printf("square:\n");
    printf("side :");
    scanf("%d", &side);

    printf("ans = %d\n\n",squareArea(side));

    int base , height;
    printf("right triangle:\n");
     printf("base :");
    scanf("%d", &base);
     printf("height :");
    scanf("%d", &height);

    printf("ans = %f\n\n", rightTriangleArea(base, height));

    int radius;
    printf("circle:\n");
    printf("radius :");
    scanf("%d", &radius);

    printf("ans = %f\n\n", circleArea(radius));


    return 0;
}