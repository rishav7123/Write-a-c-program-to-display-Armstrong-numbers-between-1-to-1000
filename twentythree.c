// Write a c program to display armstrong numbers between 1 to 1000

#include<stdio.h>
#include<math.h>

int main(){
    int num, originalnum, remainder, n;
    double result;

    printf("Armstrong numbers between 1 and 1000 are: \n");

    for (num = 1; num <= 1000; num++){
        originalnum = num;
        result = 0;
        n = 0;

        while (originalnum != 0){
            originalnum /= 10;
            n++;
        }
        originalnum = num;
        while (originalnum != 0){
            remainder = originalnum % 10;
            result += pow(remainder, n);
            originalnum /= 10;
        }
        if ((int)result == num){
            printf("%d\n", num);
        }
    }
    return 0;
}