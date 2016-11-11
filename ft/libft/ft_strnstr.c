#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	size_s2;

	size_s2 = ft_strlen(s2);
	if (*s2 == '\0')
		return ((char *)s1);
	while (n && *s1 != '\0')
	{
		if (n < size_s2)
			return (NULL);
		if (*s1 == *s2)
		{
			if (ft_strncmp(s1, s2, size_s2) == 0)
				return ((char *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}