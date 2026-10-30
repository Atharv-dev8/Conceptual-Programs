#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd=0;

    fd = open("Hello.txt",O_RDWR);

    if (fd == -1)
    {
        printf("unable to open file \n");
        return -1;
    }
    else
    {
        printf("file get Opened with fd : %d\n",fd);

        close(fd);
    }
    return 0;
    
}