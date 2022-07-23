#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>


int test_strtof(char str[], char **ptr){
int val = 0,i=0,dung=0;
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            {
                dung = 1;
                break;
            }
        if (str[i]< 57 && str[i] > 48 )
        {
            val =val*10 + (str[i]-48);
        }   
    }
    if (dung == 1)
    {
        *ptr = &str[i+1];

    }
    
	return val; 
}
int main(int argc, char const *argv[])
{
    char array[] = "365 7";
    char *ptr;
    int val =  test_strtof(array,&ptr);
    printf("\nval = %d", val);
    int val1 =  test_strtof(ptr,NULL);
    printf("\nval1 = %d", val1);
    //char* pend;

    //float f1 = strtof(array, &pend);

   // printf("f1: %f\n", f1);
    //float f2 = strtof(pend, NULL);
   // printf("f2: %f\n", f2);    

    return 0;
}
