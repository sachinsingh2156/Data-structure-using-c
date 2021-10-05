#include <stdio.h>

void function(char**);

int main(int argc, char const *argv[])
{
	char *arr[] = {"Mechanical", "civil", "Geomatics", "chemical", "Enviromental", "Electronics"};
    function(arr);
	return 0;
}

void function (char **ptr)
{
    char *ptrl;
    ptrl = (ptr += sizeof(int))[-2];
    printf("%s\n", ptrl);
}
