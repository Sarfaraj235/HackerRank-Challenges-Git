#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){

     int a[9] = {0};
     char d = 's';

     printf("%d",d);

     char *s;
     s = (char *)malloc(1000*sizeof(char));
     scanf("%s", s);

  for(int i =0; s[i] != '\0'; i++){

       if(s[i]>= '1' && s[i]<= '9'){
        a[s[i] - 48]++;

    }
  }
    for(int i =0; i<=9; i++){

        printf("%d ", a[i]);
        
    }
  
  free(s);
}
