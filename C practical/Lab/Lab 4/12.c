#include<stdio.h>

int main(){
    int word=0, character=0, length=0;
    char s[50]="Enter a sentence here";
    printf("Enter a sentence.\n");
    gets(s);
    fseek(stdin,0,SEEK_END);
    length=strlen(s);
    for (int i=0;i<length;i++){
        if (s[i]!=' '){
                if (s[i]!='.'){
                    character+=1;
                }
        }
        if (s[i]==' ' || s[i]=='.'){
            word+=1;
        }
    }
    printf("\nThe sentence is:\n");
    printf("%s\n",s);
    printf("\nThe sentence has %i character and %i word.\n",character,word);
    return 0;
}
