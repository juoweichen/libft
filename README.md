# libft - Basic toolbox for every 42 projects
Handcraft C library for every 42 C projects.<br>
Why do I need this instead of using the standard C library? <br>
Because 42 ban most of C library, if you want to make your life easier, you better create a library by yourself :P<br>
<br>
**includes:**
1. Basic libft<br>
    -> ft_str: string<br>
    -> ft_int: integer convertion & utilities<br>
    -> ft_is: is this that?<br>
    -> ft_mem: memory manipulation<br>
    -> ft_mstr: multiple string toolbox (e.g double/2d string)<br>
    -> ft_put: put something on terminal, mostly been replace by    ft_printf<br>
    -> ft_lst: general use list toolbox<br>
    -> ft_dlst: general use doubly list toolbox<br>
2. get_next_line<br>
    similar to get_line, multiple file reading supported
3. ft_printf<br>
    ft_printf: as good as printf!<br>
    ft_dprintf: output to documents<br>
<br>
    Need some color?
    ```
    ft_printf("^BOLD_RED==Don't panic!==\n");
    ```
    output:
    <p style="color:Red;"><b>==Don't panic!==</b></p>
    
    For more color option, check out /include/ft_printf.h
4. Containers<br>
    -> dictionary<br>
    -> stack<br>
    -> queue<br>

## Install
Create libft.a file
```
make
```
Link to libft.a in compiler

## Add new lib to libft
1. Create a new dir in srcs/
2. Create a header in includes/
3. Add src path to Makefile
```
SRCS += $(wildcard $(SRC_DIR)/<NEW_DIR_NAME>/*.c)
```
