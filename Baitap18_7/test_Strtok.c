#include <stdio.h>
#include <Stdlib.h>
#include <string.h>
char *test_Strtok(char *Str,const char *dau){
    static char *p=0;
    if(Str) p = Str;
    int i;
    if(*p=='\0') return 0;
    for(i=0;;i++){
    	int j;
        for( j=0;;j++){
        if(*(dau+j)=='\0') break;
        if(*(p+i)==*(dau+j)||*(p+i)=='\0'){
            char *ptr=p;
            *(p+i)='\0';
            p=(p+i+1);
            return ptr;
        }
        }
    } 
}

int main(int argc, char const *argv[]){

    char array[]="we are the world we are the children";
    char *token=test_Strtok(array," ");
    int i=0;
    while(token!=NULL){
    printf("%s\n",token);
    token=test_Strtok(NULL," ");
    }
    
}
