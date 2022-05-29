# 42 Libft 

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional 
ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures 
and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this 
library with our own functions as we go farther in the program.*

## About the project

According to [project's pdf](Libft.pdf) there should be 4 sections:

1.  **Libc Functions:** Some of the standard C functions.
2.  **Additional functions:** Functions 42 deems will be useful for later projects.
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation.
4.  **Personal Functions:** Functions I believe will be useful later.

However, I've decided reorganize and combined functions to several folders:

1. **chars:** Basic functions to work with _char_ type
2. **memory:** Memory operations(allocation, freeing etc.)
3. **output:** Functions for printing output (except for ft_printf)
4. **list:** Functions for manipulations with linked lists.
5. **strings:** Part of <string.h> functions and addition functions which I deemed useful to work with string.

My code is not the best, but it passed all the 42 tests successfully and I successfully used in my other 42 projects.

#### Note

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Forty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github 
repo, I separate them into sub folders.

## How does libft work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project and call make:
```
$ git clone https://github.com/42YerevanProjects/42_Libft.git
$ cd 42_Libft
$ make
```

You should see a *libft.a* file and some object files (.o).

That's it! If you're having some problems with the code, just create an issue. I'll definitely check it out. 
If you're 42 student fill free to message me on discord.

## Additional information 
In order to use this library it should be compiled by the Makefile of the project that is going to use the library.
Make sure to implement make file correctly.
