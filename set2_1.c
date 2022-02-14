#include<stdio.h>
#include<string.h>
void removeDuplicates(char s[])
{
    int n = strlen(s);
    char prev = '\0';
    int k = 0;
 
    // loop through the string
    for (int i = 0; i < n; i++)
    {
        // if the current char is different from the previous char
        if (prev != s[i])
        {
            // set distinct chars at index `k` and increment it
            s[k++] = s[i];
        }
 
        // update previous char to current char for the next iteration of the loop
        prev = s[i];
    }
 
    // null terminate the resultant string
    s[k] = '\0';
}
int main()
{
    char s[100];
    printf("enter string ");
    scanf("%s",&s);
    removeDuplicates(s);
    printf("%s",s);
}