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

**all the other functions in the repo, that weren't mentioned here, are not part of the libc**

## Here are the non-mandatory ones I created and added for convenience:
* ft_strrev
* ft_numlen
* ft_abs
* ft_word_counter

## short descriptions of what each function does can be found in the libft.h file:

![image](https://user-images.githubusercontent.com/92558763/193467897-d5cc881d-449f-4abc-b6a0-d90d881ddc0e.png)

## I assume most text editors allow you to view the info in the header file from the inside of a ".c" file, like so:

![image](https://user-images.githubusercontent.com/92558763/193468036-25d54ed5-80f7-44d5-a729-445d0da4b7e1.png)
**on Lunarvim, SHIFT-K when the cursor is over a function does the magic btw**
