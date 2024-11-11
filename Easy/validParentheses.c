#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

bool testParenthese(int size, char test[size]) {

    char *parenthese = (char *)malloc(0.5*size*sizeof(char));

    int index = 0;

    for(int i = 0; i < size; i++) {

        if(test[i] == '(' || test [i] == '{') {
            parenthese[index] = test[i];
            index++;
        }
        else {
            if (test[i] == ')' && parenthese[index-1] == '(') {
                index--;
            }
            else if (test[i] == '}' && parenthese[index-1] == '{') {
                index--;
            }
            else {
                free(parenthese);
                return false;
            }
        }
    } 

    free(parenthese);
    return true;

}




int main(void) {
    
    char test[4] = "{()}";

    if(testParenthese(4, test )) {
        printf("True!");
    };

}