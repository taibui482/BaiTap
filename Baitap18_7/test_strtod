#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define MAX 100


int test_strtod(char str[]){
int val = 0; 
	int mu = 0; 
	
	for(int i = strlen(str) - 1; i >= 0; i--)
	{
        if((str[i] - 48)<= 9 && (str[i] - 48)>= 0 ){
		val = val + ( (str[i] - 48) * pow(10, mu));
		mu++; 
	}
   }
	return val; 

}

int main(int argc, char const *argv[])
{
    //char str[30];
    //char *ptr;
   // double ref;

    //strcpy(str, "123 Hello world ");

    char str[MAX];
	printf("\nNhap chuoi so: ");
	gets(str);
	printf("\nChuoi so vua nhap: %s", str);

    //for (int i= 0; i < sizeof(str); i++ )
    //{
    //    printf("Ky tu: %c: 0x%x\n",str[i],str[i]);
    //}sk

    //ref = strtod(str, &ptr);

    //printf("Gia tri cua ref: %d\n", (int)ref);
    //printf("Chuoi: %s\n", ptr);
    int val =  test_strtod(str);
    printf("\nval = %d", val);

    return 0;
}
