#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int ret =0;

    ret = unlink("Demo.txt");

    if(ret == -1)
    {
        printf("unable to delete the file \n");
        return -1;
    }
    else
    {
        printf("file get succesfully deleted \n");
    }
    return 0;
}