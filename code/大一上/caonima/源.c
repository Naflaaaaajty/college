#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    char arr[100] = { 0 };
//    int i = 0, b = 0;
//    while ((arr[i] = getchar()) != '\n')
//        i++;
//    while (i >= 0)
//    {
//        b = i;
//        for (i--; i >= 0; i--)
//            if (arr[i] == ' ')
//                break;
//        for (int j = i + 1; j < b; j++)
//            printf("%c", arr[j]);
//        if (i >= 0)
//            printf(" ");
//    }
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char sentence[256];
//    printf("Enter a sentence: ");
//    fgets(sentence, 256, stdin);
//
//    // 倒置句子中的单词
//    char* word = strtok(sentence, " ");
//    while (word != NULL) {
//        printf("%s ", word);
//        word = strtok(NULL, " ");
//    }
//    printf("\n");
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char sentence[256];
    printf("Enter a sentence: ");
    fgets(sentence, 256, stdin);

    // 倒置句子中的单词顺序
    char* words[256];
    char* word = strtok(sentence, " ");
    int i = 0;
    while (word != NULL) {
        words[i] = (char*)malloc(strlen(word) + 1);
        strcpy(words[i], word);
        word = strtok(NULL, " ");
        i++;
    }

    // 打印倒置后的句子
    for (int j = i - 1; j >= 0; j--) {
        printf("%s ", words[j]);
    }

    // 释放内存
    for (int j = 0; j < i; j++) {
        free(words[j]);
    }

    return 0;
}
