#include "main.h"
#include <ctype.h>

/**                                                                                                                                         
 * _islower - checks if a char is in lower case or not                                                                                      
 * Return: 1 on true, 0 on false                                                                                                            
*/
int _islower(int c)
{
	if (islower(c))
		return 1;
	else
		return 0;
}
