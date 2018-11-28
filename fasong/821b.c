#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j, m;
    char *min, str[1000][1000];
    scanf ("%d", &m); 
    getchar ();
    for (i=0; i<m; i++)
        gets (str[i]); 
    min = str[0];
    for (i=0; i<m; i++)
        if (strcmp(min, str[i]) > 0)
            min = str[i];
        printf ("Min is: %s", min);
         
        return 0;
}
