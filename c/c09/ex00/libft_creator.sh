gcc -Wall -Wextra -Werror -c *.c
ar r libft.a *.o
ranlib libft.a
rm -r *.o
