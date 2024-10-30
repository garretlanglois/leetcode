#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes) {


    for (int i = 0; i < strsSize; i++) {

        int word_size = strlen(strs[i]);

        int* count = (int*)malloc(26*sizeof(int));

        //Create a count array for the first word
        for (int j = 0; j < word_size; j++) {
            int value = strs[i][j] - 'A';
            count[value]++;
        }

        for (int k = i+1; k < strsSize; k++) {
            int check_word_size = strlen(strs[k]);

            int dummyCount[26];

            memcpy(dummyCount, count, 26*sizeof(int));

            for(int l = 0; l < check_word_size; l++) {
                int check_value = strs[k][l] - 'A';
                dummyCount[check_value]--;
            }

            int sum = 0;

            for (int m = 0; m < 26; m++) {
                sum += dummyCount[m];
            }

            if (sum == 0) {
                
            }
        }
        
    }


}

int main() {

    char* strs[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int strsSize = 6;  // Number of strings in the strs array
    
    int returnSize;
    int* returnColumnSizes;

    char*** result = groupAnagrams(strs, strsSize, &returnSize, &returnColumnSizes);

    /*
    printf("Number of anagram groups: %d\n", returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("Group %d has %d words: ", i + 1, returnColumnSizes[i]);
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%s ", result[i][j]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory (assuming groupAnagrams dynamically allocates memory)
    // This part depends on how the memory is managed in groupAnagrams
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);  // Free each group of strings
    }
    free(result);         // Free the array of groups
    free(returnColumnSizes);  // Free the column sizes array

    return 0;
    */
}