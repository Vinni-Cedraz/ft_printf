## libft_revisited
* this repo is a personal C library, consisting of some reimplementations of common C standard library (libc) functions and also implementations of several other useful C functions that cannot be found there.
* it has started as a 42 School's project but is growing to become more than that

## libc functions by #include headers:
 **from #include <ctype.h>**
* isalpha
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower

**from #include <string.h>**
* strlen
* strdup
* memset
* memcpy 
* memmove
* memcmp
* memchr
* strlcpy (libbsd(7))
* strlcat (libbsd(7))
* strncmp
* strchr
* strrchr
* strnstr

**from #include <stdlib.h>**
* calloc
* atoi

**from #include <strings.h>**
* bzero

**all the other functions are not in the libc**

## Here are the non-mandatory ones I created and added for convenience:
* ft_strrev
* ft_numlen
* ft_abs
* ft_word_counter

## short descriptions of what each function does can be found in the libft.h file

![image](https://user-images.githubusercontent.com/92558763/193467897-d5cc881d-449f-4abc-b6a0-d90d881ddc0e.png)
