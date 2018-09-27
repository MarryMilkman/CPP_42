template<typename T>
void	iter(T *arr, int len, void (*func)(T elem))
{
	int		i;

	i = -1;
	while (++i < len)
		(*func)(arr[i]);
}