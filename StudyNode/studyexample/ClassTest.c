//
// Created by HUAWEI on 2023/5/11.
//
#include<stdio.h>
#include<string.h>
int main() {

    char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    char str_new_ch[26];
    char str_key[100];
    char str_ch[100];
    scanf("%s", str_key);
    scanf("%s", str_ch);
    int len = strlen(str_key);
    //用快慢指针去除key中重复单词
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str_key[i] == str_key[j]) {
                //后面字符向前移动
                for (int k = j; k < len; k++) {
                    str_key[k] = str_key[k + 1];
                }
                i--;
                len--;
            }

        }
    }
    //将key和字母表比较，组合为新的字母表
    int h = len;
    int flg_noEql = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < len; j++) {
            if (str[i] != str_key[j]) {
//                 h++;
                flg_noEql = 1;
//             len++;

            } else {
                flg_noEql = 0;
                break;
            }

        }
        if (flg_noEql == 1) {
            str_key[h++] = str[i];
        }

    }
    //将要加密的字符串每1位所在字母表位置替换为新字母表的对应位置的字母
    //输出加密后的结果
    for (int i = 0; i < strlen(str_ch); i++) {

        switch (str_ch[i]) {
            case 'a':
                printf("%c", str_key[0]);
                break;
            case 'A':
                printf("%c", str_key[0] - 32);
                break;
            case 'b':
                printf("%c", str_key[1]);
                break;
            case 'B':
                printf("%c", str_key[1] - 32);
                break;
            case 'c':
                printf("%c", str_key[2]);
                break;
            case 'C':
                printf("%c", str_key[2] - 32);
                break;
            case 'd':
                printf("%c", str_key[3]);
                break;
            case 'D':
                printf("%c", str_key[3] - 32);
                break;
            case 'e':
                printf("%c", str_key[4]);
                break;
            case 'E':
                printf("%c", str_key[4] - 32);
                break;
            case 'f':
                printf("%c", str_key[5]);
                break;
            case 'F':
                printf("%c", str_key[5] - 32);
                break;
            case 'g':
                printf("%c", str_key[6]);
                break;
            case 'G':
                printf("%c", str_key[6] - 32);
                break;
            case 'h':
                printf("%c", str_key[7]);
                break;
            case 'H':
                printf("%c", str_key[7] - 32);
                break;
            case 'i':
                printf("%c", str_key[8]);
                break;
            case 'I':
                printf("%c", str_key[8] - 32);
                break;
            case 'j':
                printf("%c", str_key[9]);
                break;
            case 'J':
                printf("%c", str_key[9] - 32);
                break;
            case 'k':
                printf("%c", str_key[10]);
                break;
            case 'K':
                printf("%c", str_key[10] - 32);
                break;
            case 'l':
                printf("%c", str_key[11]);
                break;
            case 'L':
                printf("%c", str_key[11] - 32);
                break;
            case 'm':
                printf("%c", str_key[12]);
                break;
            case 'M':
                printf("%c", str_key[12] - 32);
                break;
            case 'n':
                printf("%c", str_key[13]);
                break;
            case 'N':
                printf("%c", str_key[13] - 32);
                break;
            case 'o':
                printf("%c", str_key[14]);
                break;
            case 'O':
                printf("%c", str_key[14] - 32);
                break;
            case 'p':
                printf("%c", str_key[15]);
                break;
            case 'P':
                printf("%c", str_key[15] - 32);
                break;
            case 'q':
                printf("%c", str_key[16]);
                break;
            case 'Q':
                printf("%c", str_key[16] - 32);
                break;
            case 'r':
                printf("%c", str_key[17]);
                break;
            case 'R':
                printf("%c", str_key[17] - 32);
                break;
            case 's':
                printf("%c", str_key[18]);
                break;
            case 'S':
                printf("%c", str_key[18] - 32);
                break;
            case 't':
                printf("%c", str_key[19]);
                break;
            case 'T':
                printf("%c", str_key[19] - 32);
                break;
            case 'u':
                printf("%c", str_key[20]);
                break;
            case 'U':
                printf("%c", str_key[20] - 32);
                break;
            case 'v':
                printf("%c", str_key[21]);
                break;
            case 'V':
                printf("%c", str_key[21] - 32);
                break;
            case 'w':
                printf("%c", str_key[22]);
                break;
            case 'W':
                printf("%c", str_key[22] - 32);
                break;
            case 'x':
                printf("%c", str_key[23]);
                break;
            case 'X':
                printf("%c", str_key[23] - 32);
                break;
            case 'y':
                printf("%c", str_key[24]);
                break;
            case 'Y':
                printf("%c", str_key[24] - 32);
                break;

            case 'z':
                printf("%c", str_key[25]);
                break;
            case 'Z':
                printf("%c", str_key[25] - 32);
                break;
        }

    }
    printf("\n");
    return 0;
}
