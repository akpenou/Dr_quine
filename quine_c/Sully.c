#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_itoa(unsigned long long int n)
{
	char							*nbr;
	const char						*base = "0123456789";
	unsigned long long int			len;
	unsigned long long int			pow;

	pow = 1;
	len = 1;
	while (n / pow > 10 - 1 && ++len)
		pow *= 10;
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = 0;
	while (pow > 0)
	{
		nbr[len] = base[(int)((n / pow) % 10)];
		pow /= 10;
		len++;
	}
	nbr[len] = 0;
	return (nbr);
}

char	*strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	join = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!join)
		return (NULL);
	i = -1;
	while (s1 && s1[++i])
		join[i] = s1[i];
	j = -1;
	while (s2 && s2[++j])
		join[i++] = s2[j];
	join[i] = 0;
	return (join);
}

int main()
{
	int i = 5;
	char *bin = strjoin("Sully_", ft_itoa(--i));
	char *file = strjoin(bin, ".c");
	FILE *fd = fopen(file, "w");
	const char *s = "#include <stdio.h>%c#include <sys/types.h>%c#include <sys/stat.h>%c#include <fcntl.h>%c#include <string.h>%c#include <unistd.h>%c#include <stdlib.h>%c%cchar%c*ft_itoa(unsigned long long int n)%c{%c%cchar%c%c%c%c%c%c%c*nbr;%c%cconst char%c%c%c%c%c%c*base = %c0123456789%c;%c%cunsigned long long int%c%c%clen;%c%cunsigned long long int%c%c%cpow;%c%c%cpow = 1;%c%clen = 1;%c%cwhile (n / pow > 10 - 1 && ++len)%c%c%cpow *= 10;%c%cif (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))%c%c%creturn (NULL);%c%clen = 0;%c%cwhile (pow > 0)%c%c{%c%c%cnbr[len] = base[(int)((n / pow) %c 10)];%c%c%cpow /= 10;%c%c%clen++;%c%c}%c%cnbr[len] = 0;%c%creturn (nbr);%c}%c%cchar%c*strjoin(char const *s1, char const *s2)%c{%c%csize_t%ci;%c%csize_t%cj;%c%cchar%c*join;%c%c%cif (!s1 && !s2)%c%c%creturn (NULL);%c%cjoin = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));%c%cif (!join)%c%c%creturn (NULL);%c%ci = -1;%c%cwhile (s1 && s1[++i])%c%c%cjoin[i] = s1[i];%c%cj = -1;%c%cwhile (s2 && s2[++j])%c%c%cjoin[i++] = s2[j];%c%cjoin[i] = 0;%c%creturn (join);%c}%c%cint main()%c{%c%cint i = %d;%c%cchar *bin = strjoin(%cSully_%c, ft_itoa(--i));%c%cchar *file = strjoin(bin, %c.c%c);%c%cFILE *fd = fopen(file, %cw%c);%c%cconst char *s = %c%s%c;%c%cfprintf(fd, s, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 10, 9, 9, 9, 9, 9, 9, 9, 34, 34, 10, 9, 9, 9, 9, 10, 9, 9, 9, 9, 10, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 37, 10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10, 10, 9, 10, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10, 10, 10, 10, 9, i, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, s, 34, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, 34, 34, 34, 34, 34, 10, 9, 10, 10, 10);%c%cfclose(fd);%c%cif (i <= 0)%c%c%creturn (0);%c%csystem(strjoin(strjoin(strjoin(strjoin(%cgcc -Wall -Wextra -o %c, bin), %c %c), file), strjoin(%c ; ./%c, bin)));%c%creturn (0);%c}%c";
	fprintf(fd, s, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 10, 9, 9, 9, 9, 9, 9, 9, 34, 34, 10, 9, 9, 9, 9, 10, 9, 9, 9, 9, 10, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 37, 10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10, 10, 9, 10, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10, 10, 10, 10, 9, i, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, s, 34, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, 34, 34, 34, 34, 34, 10, 9, 10, 10, 10);
	fclose(fd);
	if (i <= 0)
		return (0);
	system(strjoin(strjoin(strjoin(strjoin("gcc -Wall -Wextra -o ", bin), " "), file), strjoin(" ; ./", bin)));
	return (0);
}
