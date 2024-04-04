#include<stdio.h>
int main(){
int num = 0;
int num2;
int div;
int result;
char letter;
char array[6];
printf("Enter 5 numbers :\n");

for (int i = 0; i <= 4; i++)
{
scanf("%d",&array[i]);
}


for (int i = 0; i <= 4; i++)
{

if(num < array[i])
{
num = array[i];
}
}
printf("Highest number is %d",num);


return 0;


}