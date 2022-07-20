#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



int StringEqual(char s1[], char s2[])
{
    int den_s1 = 0, den_s2 = 0;

    while (s1[den_s1] != '\0')
        den_s1++;
    while (s2[den_s2] != '\0')
        den_s2++;

	int dodai_min = den_s1 < den_s2 ? den_s1 : den_s2;

	for(int i = 0; i < dodai_min; i++)
	{
		if(s1[i] > s2[i])
		{
			return 1; 
		}
		else if(s1[i] < s2[i])
		{
			return -1; 
		}
	}

	if(den_s1 > den_s2)
	{
		return 1;
	}
	else if(den_s1 < den_s2)
	{
		return -1;
	}

	return 0; 
}



int main(int argc, char const *argv[])
{
    char s1[] = "Taibui";
	char s2[] = "taibui";

	if(StringEqual(s1, s2) > 0)
	{
		printf("\nChuoi s1 lon hon chuoi s2");
	}
	else if(StringEqual(s1, s2) < 0)
	{
		printf("\nChuoi s2 lon hon chuoi s1");
	}
	else
	{
		printf("\nChuoi s2 bang chuoi s1");
	}


	return 0;
   

}

