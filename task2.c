
#include<stdio.h>
int main(){
int num;
int num2;
int div;
float result;
printf("Kashif\n");


printf("Please enter 2 integer: \t");

scanf("%d %d", &num, &num2);

result = num % 2;
if (result == 0){
result = num2 % 2;
if (result == 0){
result = num + num2;
}
else{
result = num * num2;
}
}
else{
result = num * num2;
}
printf("%f", result);

return 0;


}



