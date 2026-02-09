 #include <stdio.h>
int main() {
    char operation;
    scanf("%c",& operation);
    float a,b;
    scanf("%f %f",&a,&b);
    switch(operation){
        case'+':
        printf("%.2f+%.2f=%.2f",a,b,a+b);
        break;
        case'-':
        printf("%.2f-%.2f=%.2f",a,b,a-b);
        break;
        case '*':
        printf("%.2f*%.2f=%.2f",a,b,a*b);

        break;
        case '/':
        if(b==0){
            printf("Error! Divisible by zero");
        }
        else {
        printf("%.2f/%.2f=%.2f",a,b,a/b);
        }
        break;
        default:
        printf("Error ! Invalid Input");
    }
    
    return 0;
}
