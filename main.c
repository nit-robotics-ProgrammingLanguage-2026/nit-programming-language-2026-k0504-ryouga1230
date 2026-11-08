#include <stdio.h>

int main(void) {
    int number;
    // 数値を入力する
    scanf("%d", &number);

    // 0未満、10〜11、15以上以外の場合にOKとする判定
    int is_ok = !(number < 0 || (number >= 10 && number < 12) || number >= 15);

    if (is_ok == 1) {
        printf("OK");
    } else {
        printf("NG");
    }
    return 0;
}