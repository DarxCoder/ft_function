int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1[0] != '\0' || s2[0] != '\0')
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
			{
				return (0);
			}
			i++;
		}
		if (s1[i] != s2[i])
		{
			return (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}
