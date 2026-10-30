#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd=0;
    char Arr[] = "marvellous infosystem";

    fd = open("Hello.txt",O_RDWR);

    if (fd == -1)
    {
        printf("unable to open file \n");
        return -1;
    }
    else
    {
        printf("file get Opened with fd : %d\n",fd);

        write(fd,Arr,10);

        close(fd);
    }
    return 0;
    
}