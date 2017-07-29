#include <unistd.h>

void    my_aff_tab_num(int tab[], int size);

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    int tab1[2] = {4, 2};
    int tab2[5] = {1, 2, 3, 4, 5};
    int tab3[7] = {4, 2, 2, 4, 4, 2, 2};
    int tab4[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    my_aff_tab_num(tab1, 2);
    my_putchar('\n');
    my_aff_tab_num(tab2, 5);
    my_putchar('\n');
    my_aff_tab_num(tab3, 7);
    my_putchar('\n');
    my_aff_tab_num(tab4, 9);

    return(0);
}
