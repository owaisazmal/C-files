#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Owais";
    char string2[] = "Khan";

    // strlwr(string1); //coverts into lower case
    // strupr(string1); //coverts into upper case
    // strcat(string1, string2); //appends string2 to end of string1
    // strncat(string1, string2, 1); //appends n character from string2 to string1
    // strcpy(string1, string2); //copy string2 to string1
    // strn(string1, string2, 1); //copy n characters of string to string1
    // strrev(string1); //reverses the string

    //(used a lot)
    //int result = strlen(string1);                          // returns string length as int
    int result = strcmp(string1, string2);     //string compares all characters 
    //int result = strncmp(string1, string2, 1);   // string compare n characters
    //int result = strcmpi(string1, string1);        // string compare all (ignore case)
    //int result = strnicmp(string1, string1, 1);  // string compare n characters (ignore case)

    //printf("%s", string1);
    
    if(result == 0)
    {
    printf("Strings are same");
    }

    else
    {
        printf("Strings are not same");
    }


    return 0;
}