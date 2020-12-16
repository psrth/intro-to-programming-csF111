# Lecture 02 — Unix File System and Commands


## Unix Operating System
One of the greatest acheivements in the field of CS. 
1. Multi-user, multi-tasking OS
2. Stabality, portability, and security
3. Creators Dennis Ritchie and Ken Thomson won the ACM Turing Award

## File System in Unix
Everything is organised in a multi-leveled hierarchy, the **directory tree.** It is an inverted tree. All other repositories are nested under the ```root directory.```

![directory](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/lec02-1.png)

The most important principle of the Unix File System is that ***everything is a file.*** A repository would be represented as a file if you imagine a file with other ```f1.file``` and ```f2.directory``` in it.

Even the terminal — ```stdin``` and ```stdout``` are also files, input and output.


## Path of a file in UNIX
**1. Absolute:** tells us how to reach a file from ```root```. Always begins with /

**2. Relative:** tells how to reach a file from ```current_repository```. Never begins with /



### In the directory tree in the section above:

Absolute path to private: ```/home/mkl/private```

Relative path to private, from bin: ```../../home/mkl/private```


[Fun Optional Read about Unix Directory System](https://www.tau.ac.il/~tsirel/dump/Static/knowino.org/wiki/Unix_directory_structure.html#:~:text=The%20Unix%20directory%20is%20a,of%20a%20set%20of%20subdirectories.)


## General UNIX Commands 

**1. cal:** ```$ cal [month] [year]```
displays the calendar

**2. banner:** ```$ banner [text]```
prints a banner with text written using #

**3. who:** ```$ who```
returns everyone who is logged in

## File System Commands

**1. touch:** ```$ touch [file-name]```
It is used to create a file without any content. The file created using touch command is empty. This command can be used when the user doesn’t have data to store at the time of file creation.

**2. cat:** 
```$ cat [file-name]```: displays content of file (concatenate null)
```$ cat > [file-name]```: updates the content of the file
```$ cat -n [file-name]```: displays content with line numbers
```$ cat [file-name] > [file-name2]```: updates content of 2 with 1 (std output redirection)
```$ cat < [file-name2]```: (std input redirection)???!!!!
```$ cat [file-name] >> [file-name2]```: appends content of 2 to 1
```$ cat [file-name] [file-name2] > [file-name3]```: new file3 contains content of 1 and 2

wc
man

#3) cp: 
Copy files
Syntax: cp [OPTION]source destination
Example: Copies the contents from file1 to file2 and contents of file1 is retained
$ cp file1 file2

#4) mv: Move files or rename files
Syntax: mv [OPTION]source destination
Example: Create empty files called ‘file1’ and ‘file2’
$ mv file1 file2

#5) rm: Remove files and directories
Syntax: rm [OPTION]…[FILE]
Example: Delete file1
$ rm file1

#6) mkdir: Make directory
Syntax: mkdir [OPTION] directory
Example: Create directory called dir1
$ mkdir dir1

#7) rmdir: Remove a directory
Syntax: rmdir [OPTION] directory
Example: Create empty files called ‘file1’ and ‘file2’
$ rmdir dir1

#8) cd: Change directory
Syntax: cd [OPTION] directory
Example: Change working directory to dir1
$ cd dir1

#9) pwd: Print the present working directory
Syntax: pwd [OPTION]
Example: Print ‘dir1’ if a current working directory is dir1
$ pwd

10) wc stands for word count. As the name implies, it is mainly used for counting purpose.

It is used to find out number of lines, word count, byte and characters count in the files specified in the file arguments.
By default it displays four-columnar output.
First column shows number of lines present in a file specified, second column shows number of words present in the file, third column shows number of characters present in file and fourth column itself is the file name which are given as argument.

11) man
man command in Linux is used to display the user manual of any command that we can run on the terminal. It provides a detailed view of the command which includes NAME, SYNOPSIS, DESCRIPTION, OPTIONS, EXIT STATUS, RETURN VALUES, ERRORS, FILES, VERSIONS, EXAMPLES, AUTHORS and SEE ALSO.

12) ls

## Grep Command (Global Search for the Regular Expression)
Grep Command in Unix with Examples
Syntax:

grep [options] [pattern] [file]
The pattern is specified as a regular expression. A regular expression is a string of characters that is used to specify a pattern matching rule. Special characters are used to define the matching rules and positions.

#1) Anchor Characters: ‘^’ and ‘$’ at the beginning and end of the pattern are used to anchor the pattern to the start of the line, and to the end of the line respectively.

Example: “^Name” matches all lines that start with the string “Name”. The strings “\<” and “\>” are used to anchor the pattern to the start and end of a word respectively.

#2) Wildcard Character: ‘.’ Is used to match any character.

Example:“^.$” will match all lines with any single character.

#3) Escaped Characters: Any of the special characters can be matched as a regular character by escaping them with a ‘\’.

Example: “\$\*” will match the lines that contain the string “$*”

#4) Character Range: A set of characters enclosed in a ‘[‘ and ‘]’ pair specify a range of characters to be matched.

Example: “[aeiou]” will match all lines that contain a vowel. A hyphen can be used while specifying a range to shorten a set of consecutive characters. E.g. “[0-9]” will match all lines that contain a digit. A carat can be used at the beginning of the range to specify a negative range. E.g. “[^xyz]” will match all lines that do not contain x, y or z.

#5) Repetition Modifier: A ‘*’ after a character or group of characters is used to allow matching zero or more instances of the preceding pattern.

The grep command supports a number of options for additional controls on the matching:

-i: performs a case-insensitive search.
-n: displays the lines containing the pattern along with the line numbers.
-v: displays the lines not containing the specified pattern.
-c: displays the count of the matching patterns.
Examples:

Match all lines that start with ‘hello’. E.g: “hello there”
$ grep “^hello” file1
Match all lines that end with ‘done’. E.g: “well done”
$ grep “done$” file1
Match all lines that contain any of the letters ‘a’, ‘b’, ‘c’, ‘d’ or ‘e’.
$ grep “[a-e]” file1
Match all lines that do not contain a vowel
$ grep “[^aeiou]” file1
Match all lines that start with a digit following zero or more spaces. E.g: “ 1.” or “2.”
$ grep “ *[0-9]” file1
Match all lines that contain the word hello in upper-case or lower-case
$ grep -i “hello”


## Pipe Command
output of command becomes input of next command

Let us now see an Example of using pipes to print out a sorted list of unique words. If file1 has a list of words in a random order with random repetitions, then the following piping can be used to achieve this.

$ sort file1 | uniq > file2
Here, the sort command reads input from the file ‘file1’ and sends the output to stdout. The pipe symbol causes the output of the sort command to be redirected to the input of the uniq command. The uniq commands reads the sorted list from its stdin and prints the unique words from there to its stdout.

Finally, the output redirection symbol ‘>’ redirects the stdout of the uniq command to the file ‘file2’.
