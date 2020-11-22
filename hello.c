#include <stdio.h>
#include <errno.h>

int main()
{
    printf("Hello World !\n");

    // 错误输出
    errno = EAGAIN;
    perror("错误输出");
    return 0;
}