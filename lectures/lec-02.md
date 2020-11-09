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


### Path of a file in UNIX
**1. Absolute:** tells us how to reach a file from ```root```. Always begins with /
**2. Relative:** tells how to reach a file from ```current_repository```. Never begins with /

In the directory tree in the section above:
Absolute path to private: ```/home/mkl/private```
Relative path to private, from bin: ```../../home/mkl/private```

[Fun Optional Read about Unix Directory System](https://www.tau.ac.il/~tsirel/dump/Static/knowino.org/wiki/Unix_directory_structure.html#:~:text=The%20Unix%20directory%20is%20a,of%20a%20set%20of%20subdirectories.)

