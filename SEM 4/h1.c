#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
    int main()
{
    int fd[2];
    char rec[100], rec1[100];
    char msg[2][20] = {"Pipemsg1", "secondmsg"};
    int p = pipe(fd);
    if (p == -1)
    {
        printf("Cant create pipe\n");
        return 1;
    }
    write(fd[1], msg[0], strlen(msg[0]));
    read(fd[0], rec, 100);
    printf("%s\n", rec);
    fsync(fd[1]);
    // strcpy(rec, "");
    write(fd[1], msg[1], strlen(msg[1]));
    read(fd[0], rec, 100);
    printf("%s\n", rec);
    exit(0);
}