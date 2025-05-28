#include <stdio.h>


int main() {
    char ch;
    scanf("%c", &ch);
    
    char s[20];
    scanf("%s", &s[0]);
   
    char sen[50];
    scanf("\n");
    scanf("[^\n]%*c", sen);
    
     printf("%c\n", ch);
     printf("%s\n", s[0]);
     printf("%s\n", sen);

  
    return 0;
}
