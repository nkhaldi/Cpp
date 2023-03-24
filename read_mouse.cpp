#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    // Open mouse's driver from /dev/input/mice
    const char *pDevice = "/dev/input/mice";
    int fd = open(pDevice, O_RDWR);
    if (fd == -1)
    {
        printf("Can't open mouse driver: %s\n", pDevice);
        return -1;
    }

    int bytes;
    int data[3];
    int x, y, left, middle, right;

    while (true)
    {
        // Read mouse's coordinates into data
        bytes = read(fd, data, sizeof(data));

        if (bytes > 0)
        {

            x = data[1];
            y = data[2];
            left = data[0] & 0x1;
            right = data[0] & 0x2;
            middle = data[0] & 0x4;

            // Printing coordinates
            printf("x = %d, y = %d\n", x, y);
            printf("left = %d, middle = %d, right = %d\n", left, middle, right);
        }
    }
    return 0;
}
