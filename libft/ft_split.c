#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int	ft_getNumberOfStrings(const char *s, char c)
{
	int	counter;
	int	newStringWasCounted;
	int	i;

	counter = 0;
	i = 0;
	newStringWasCounted = 0;
	while (s[i] != '\0')
	{
		if (!newStringWasCounted && s[i] != c)
		{
			counter++;
			newStringWasCounted = 1;
		}
		if (newStringWasCounted && s[i] == c)
			newStringWasCounted = 0;
		i++;
	}
	return (counter);
}

static void	ft_getValidIndexes(char const *s, char c, int *sindex, int *eindex)
{
	int	index;

	index = *sindex;
	while (s[index] == c)
		index++;
	*sindex = index;
	while (s[index] != c || s[index] == '\0')
		index++;
	*eindex = index - 1;
}

static void	ft_copyStringToPtr(char const *s, int startIndex, int endIndex,
	char *ptr)
{
	int	i;

	i = 0;
	while (i < endIndex - startIndex + 1)
	{
		ptr[i] = s[startIndex + i];
		i++;
	}
	ptr[i] = '\0';
}

static void	ft_variablesInitiation(int *i, int *sIndex)
{
	*i = 0;
	*sIndex = 0;
}

char	**ft_split(char const *s, char c)
{
	int		startIndex;
	int		endIndex;
	int		nStr;
	int		i;
	char	**split;

	ft_variablesInitiation(&i, &startIndex);
	nStr = ft_getNumberOfStrings(s, c);
	if (s == NULL)
		return (0);
	split = (char **) malloc(sizeof(char *) * (nStr + 1));
	if (split == NULL)
		return (0);
	while (i < nStr)
	{
		ft_getValidIndexes(s, c, &startIndex, &endIndex);
		split[i] = (char *) malloc(sizeof(char) * (endIndex - startIndex + 2));
		if (split[i] == NULL)
			return (0);
		ft_copyStringToPtr(s, startIndex, endIndex, split[i]);
		startIndex = endIndex + 1;
		i++;
	}
	split[i] = NULL;
	return (split);
}

/* int main()
{
	char **split;
	int i;
	split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');

//	split = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	i = 0;
	while(split[i] != NULL)
	{
		printf("palavra[%d]: %s\n", i + 1, split[i]);
		i++;
	}
	return (0);
} */