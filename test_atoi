#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 100

int test_atoi(char str[]){

int val = 0; 
	int mu = 0; 
	
	for(int i = strlen(str) - 1; i >= 0; i--)
	{
		val = val + ( (str[i] - 48) * pow(10, mu));
		mu++; 
	}
	return val; 

}

int main(int argc, char const *argv[])
{

    char str[MAX];
	printf("\nNhap chuoi so: ");
	gets(str);
	printf("\nChuoi so vua nhap: %s", str);

    //strcpy(str, "123456789");

    //printf("Chuoi : %s\n", str);

   //val =atoi(str);
    int val =  test_atoi(str);
    printf("\nval = %d", val);
    return 0;
}

