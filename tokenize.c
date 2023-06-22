#include "monty.h"

/**
 * tokenize - splits line content
 * @lineptr: the number of argument
 * Return: 1 if success and -1 otherwise
 */

int tokenize(char *str)
{
  char delim = " \r\t";
  char *token;

  if (!str)
    return (-1);
  gvars.cmd = strtok(str, delim);
  if (gvars.cmd)
  {
    token = strtok(NULL, delim);
    if (token)
      gvars.raw_input = atoi(token);
    return (1);
  }
}
