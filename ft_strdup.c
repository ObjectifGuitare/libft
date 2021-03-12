char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(*new) * (ft_strlen(s) + 1));
	if (!new)
		return (0);
	while (s[i] != 0)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
