#include <stdio.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine);

int main(){
    char ransomNote[10] = {"aa"};
    char magazine[10] = {"aba"};

    printf("%d\n",canConstruct(ransomNote,magazine));

    return 0;
}

bool canConstruct(char* ransomNote, char* magazine) {
    int r=strlen(ransomNote),m=strlen(magazine);
    int i=0,j=0;
    if(r>m) return false;

    while(j<m){
        while(ransomNote[i] == magazine[j]){
            magazine[j] = '_';
            i++;
            j=-1;
        }
        j++;
    }

    return i<r? false:true;
}