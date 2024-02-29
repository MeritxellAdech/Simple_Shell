# Simple Shell
This is an incredibly cool project of a `shell` that challenges all core understanding, beginning from basic programming, basics of C, engineering thinking, team work, and to learning how to learn. 

The project will go through phases or versions, like any other project or application out there, from v0.1 to v1.0+.

## Features based on versions
1. `v0.1`
* Take and execute user simple commands made of one word
* Handle erros, of which `EOF` (Ctrl + D) is one
* `execve` is the core part of this shell

2. `v0.2`
* Handle command line arguments

3. `v0.3`
* Handle `PATH`
* `fork` only if the command exists

4. `v0.4`
* Implement `exit` to exit the shell. Without handling the arguments of the built-in `exit`

5. `v0.1.1`
* Write a another version of `getline` function
* Make use of static variables
* With the help of a buffer, read as many characters as possibleat once

6. `v0.2.1`
* `strtok` is not allowed

7. `v0.4.1`
* Handle `exit` arguments

8. `v1.0+`
* Implement `setvenv`
* Implement`unsetenv`
* Implement `cd [directory]` 
* Handle `;` command separator
* Handle logical operators `||` and `&&`
* Implement alias built-in command
* Handle variable replacement `$?` and `$$`
* Handle comments `#`

## How to run
* `clone` this repository
* `cd` to `simple_shell` directory 
* `compile` using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o <any>`
* `./<any>`

## Collaboration
This project is created for a team of two(2) people, and for only them. Other forms or collaboration is not accepted

## Collaborators
See file [AUTHORS](https://github.com/MeritxellAdech/simple_shell/blob/master/AUTHORS)

### Important
This project is under ALX SE evaluation. 


