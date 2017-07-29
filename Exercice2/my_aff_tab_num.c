void my_putchar(char c);

void my_aff_tab_num(int tab[], int size)
{
  int i;
  i=0;
  
    while (i!=size)
      {     
      my_putchar(tab[i] + '0');
      my_putchar('\n');
      i++;
      }
}
