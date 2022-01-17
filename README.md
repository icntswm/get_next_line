# get_next_line
> A project in which you need to implement the ability to read lines from a given file descriptor (this can be either a file or standard input [0])
***
Compilation: `gcc get_next_line.c get_next_line_utils.c`

For the program to work, you need to write a ***main*** function

* Example with file descriptor equal to 0:

```c
int main()
{
    char    *line;

    while(get_next_line(0, &line))
    {
        write(1, line, ft_strlen(line));
        write(1, "\n", 1);
        free(line);
    }
    free(line);
    
    return (0);
}
```
* Example when we want to read content from a file:
```c
int main()
{
	char    *line;
	int     file;

	// open the file we want
	file = open("./file", O_RDONLY);
	
	while(get_next_line(file, &line))
	{
		write(1, line, ft_strlen(line));
		write(1, "\n", 1);
		free(line);
	}
	write(1, line, ft_strlen(line));
	write(1, "\n", 1);
	free(line);
	
	return (0);
}
