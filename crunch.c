#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define A_d 0
#define A_s 1
#define A_c 2
#define A_i 3
#define no_arg 4
//hey could you please give me a pen

int str_length(const char *str)
{
    return (*str) ? str_length(++str) + 1 : 0;
}

char* create_str(char *str)
{
    char* ss;
    char* chc;
    int len = 0;
    len = str_length(str);
    ss = malloc(len + 1);
    chc = ss;
    while (*str)
        *chc++ = *str++;
    *chc = '\0';
    return ss;
}

int cmp(char* s1, char* s2)
{
    int j = 0;
    for (; s1[j] != '\0'; j++) {
        if (s1[j] != s2[j])
            return 0;
    }
    if (s1[j] == s2[j])
        return 1;
    return 0;
}

int which_argument(char* a)
{
    if (cmp(a,"-d")) return A_d;
    if (cmp(a,"-m")) return A_s;
    if (cmp(a,"-n")) return A_c;
    if (cmp(a,"-s")) return A_i;
    return no_arg;
}

int in(char** words, const char* w, int x)
{
    for (int i = 0; i < x; i++) if (cmp(words[i], w)) return 1;
    return 0;
}

int main(int argc, char** argv) {
    int uniq = 0;
    srand(time(0));
    int degree = 4;
    int size = 6;
    int count = 1;
    int spaces = 0;

    if (argc == 0)
    {
        printf("Give file to read\n");
        return -1;
    }

    int arg = no_arg;
    int v;
    for (int i = 1; i < argc; i +=2) {
        arg = which_argument(argv[i]);
        if (arg == no_arg)
        {
            printf("argument Error\n");
            return -1;
        }
        if (arg == A_i)
        {
            spaces = 1;
            i--;
            continue;
        }
        v = atoi(argv[i+1]);
        if (arg == A_d) degree = v;
        if (arg == A_c) count = v;
        if (arg == A_s) size = v;
    }

    char** input = malloc(50000*sizeof(char*));
    char cword[100];
    int j = 0;
    while (fscanf(stdin, "%100s", cword) == 1) {
        if (in(input, cword, j) == 0)
            uniq++;
        const char *word = create_str(cword);
        input[j++] = word;
    }

    if (uniq < degree) {
        printf("Not enough uniq words\n");
        return -1;
    }

    char** output = malloc(degree * sizeof(char*));
    int n = 0;
    while (n < count) {
        for (int w = 0; w < degree; w++) {
            int r = rand() % (j-1);
            while (in(output, input[r],w))
                r = rand() % (j-1);
            output[w] = input[r];
        }
        for (int i = 0; i < degree; i++) {
            printf("%s",output[i]);
            if (spaces)
                printf(" ");
        }
        printf("\n");
        n++;
    }

    free(input);
    return 0;
}
// could you please tell me what have I changed????