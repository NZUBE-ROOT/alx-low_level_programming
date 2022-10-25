#include <stdio.h>
#include <stdarg.h>
#include <string.h>
void print(char *s, ...);
int main() {
    int w, t, m, k, g, p;
    w =23;
    t = 'd';
    m = 2.876;
    char q[] = "hello world";
    print("my name is nzube  %d %c dn", w, t, m);
    // Write C code here
    printf("Hello world");

    return 0;
}
void print(char *s, ...)
{
    va_list moma;
    va_start(moma, s);
   char a = 0;
    while (s[a] != '\0')
    {
        if (s[a] == '%' && s[a + 1] == 'd')
        {
            printf("%d", va_arg(moma, int));
        }
        
        if (s[a] == '%' && s[a + 1] == 'c')
        {
           printf("%c", va_arg(moma, int)); 
        }
        if (s[a] == '%' && s[a + 1] == 's')
        {
           printf("%s", va_arg(moma, char *)); 
        }
        if (s[a] == ' ')
        {
            putchar(' ');
        }
      if (s[a] == 'd' && s[a + 1] == 'n')
        {
            putchar('\n');
        }
    
	 if (s[a] != 'd' && s[a + 1] != 'n' && s[a] != '%' && s[a + 1] != 's' && s[a] != '%' && s[a + 1] != 'c' && s[a] != '%' && s[a + 1] != 'd')  
        putchar(s[a]);
        
        
        a++;
        va_end(moma);
    }
}

