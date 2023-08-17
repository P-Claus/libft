int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		if (len == dstsize)
		{
			len--;
			break;
		}
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
