#include <unistd.h>
#include <stdio.h>

void my_putstr(char *str)
{
    char *str_cpy = str;
    while (*str++);
    write(1, str_cpy, str - str_cpy);
}

int main(int ac, char *av[])
{
    // skip the null by adding one
    ac++;
    if (ac != 3)
    {
        while (*(av + ac))
        {
            my_putstr(*(av + ac));
            my_putstr("\n");
            ac++;
        }
        return 0;
    }
    while (*(av + ac))
    {
        int j = 0;
        // TODO: loop through *(arv + 1) instead
        // in most cases its shorter than the name+value from memory
        // so its gonna be a performence inhancement
        while (*(*(av + ac) + j) && *(*(av + 1) + j) == *(*(av + ac) + j))
        {
            if (*(*(av + ac) + j + 1) == '=' && *(*(av + 1) + j + 1) == '\0')
            {
                my_putstr((*(av + ac) + j + 2));
                my_putstr("\n");
            }
            j++;
        }
        ac++;
    }
    return 0;
}
