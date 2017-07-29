#include <stdio.h>

int     *my_fill_tab();

int     main()
{
    int   *res;
    int   i;

    res = my_fill_tab();
    for (i = 0; i != 100; i++)
    {
        printf("%d\n", res[i]);
    }
    return (0);
}
