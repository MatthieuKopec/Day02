int *my_fill_tab()
{
  static int tab[100];
  int i;
  i=0;

  while (i<100)
    {
    tab[i] = i + 1;
    i++;
  }

  return tab;
}
