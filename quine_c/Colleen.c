#include <stdio.h>

/*
	Premier commentaire
*/

static int ft_strlen(char *s)
{
	return (s && *s ? 1 + ft_strlen(++s) : 0);
}

int main()
{
	/*
		Second commentaire
	*/
	const char *s = "#include <stdio.h>%c%c/*%c%cPremier commentaire%c*/%c%cstatic int ft_strlen(char *s)%c{%c%creturn (s && *s ? 1 + ft_strlen(++s) : 0);%c}%c%cint main()%c{%c%c/*%c%c%cSecond commentaire%c%c*/%c%c%cconst char *s = %c%s%c;%c%cif (ft_strlen((char *)s))%c%c%cprintf(s, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 10, 9, 34, s, 34, 10, 9, 10, 9, 9, 10, 9, 10);%c%creturn (0);%c}";
	if (ft_strlen((char *)s))
		printf(s, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 10, 9, 34, s, 34, 10, 9, 10, 9, 9, 10, 9, 10);
	return (0);
}
