#include <stdlib.h>
#include <stdio.h>

int word_count(char *str);
char *copy_word(char *start, int length);
void free_words(char **words, int count);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, word_len = 0, words = 0;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	result = malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;

		if (str[i])
		{
			j = i;
			word_len = 0;

			while (str[i] && str[i] != ' ')
			{
				word_len++;
				i++;
			}

			result[k] = copy_word(&str[j], word_len);
			if (result[k] == NULL)
			{
				free_words(result, k);
				return (NULL);
			}
			k++;
		}
	}

	result[k] = NULL;
	return (result);
}

/**
 * word_count - Counts number of words in a string
 * @str: The string
 *
 * Return: Number of words
 */
int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * copy_word - Copies a word into a new string
 * @start: Pointer to the start of the word
 * @length: Length of the word
 *
 * Return: Pointer to the new word string
 */
char *copy_word(char *start, int length)
{
	int i;
	char *word = malloc(sizeof(char) * (length + 1));

	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = start[i];

	word[i] = '\0';
	return (word);
}

/**
 * free_words - Frees memory allocated for words
 * @words: Array of word strings
 * @count: Number of words to free
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);
}

