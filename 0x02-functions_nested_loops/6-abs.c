#include "main.h"

/**
 * _abs - copmputes the absolute value
 * @c:the value to be computed
 * Return:absolute numder or 0
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
