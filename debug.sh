echo "type the clean name of the function such as \"split\""

read function

make re && make clean && cc -g ft_$function.c main.c libft.a && lvim main.c
