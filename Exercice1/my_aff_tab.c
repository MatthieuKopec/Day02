void my_putchar(char c);

void my_aff_tab(char str[])
{
  
  int i;
    
  i = 0;
    
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
 }
