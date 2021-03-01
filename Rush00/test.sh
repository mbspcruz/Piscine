echo 'Testing norminette'
norminette -R CheckForbiddenSourceHeader Rush03/main.c
norminette -R CheckForbiddenSourceHeader Rush03/ft_putchar.c
norminette -R CheckForbiddenSourceHeader Rush03/rush03.c
echo 'Done testing norminette'
gcc -Wall -Werror -Wextra Rush03/rush03.c Rush03/ft_putchar.c Rush03/main.c -o test.out && ./test.out