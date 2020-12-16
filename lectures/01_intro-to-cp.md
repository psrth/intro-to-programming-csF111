# Lecture 01 — Intro to Computer Programming


## What is a computer?
**classical definition: a device that takes data as input, does some processing, and then returns an output**
A more realistic definition of a computer is: any device that processes information. 

A bit of a history lesson — every invention in history has been to help humans with work. Before computers, all the inventions (like the wheel, the steam engine, the printing press) existed to help with *manual* work. The invention of the computer however, was to help humans with *thinking* work. On a granular level, all computers do is receive information, process that information, and then display or return the processed information.



## How does a computer, well, compute?

![computing](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/lec1-cpu.png)

Here, the machine receives an input. Then, a 4 step process is carried out:
1. The *control unit* fetches instructions from the *memory*
2. The *control unit* decodes those instructions into commands
3. The *ALU* (arithmetic-logic unit) executes those commands
4. The results of these commands are stored in the *memory*



## What are the different types of memory on a computer?
| **Type of Memory** | **Description** |
| ----------------------------- | ------------------ |
| **Register**| A register is a temporary storage area built into a CPU. It quickly accepts, stores, and transfers data and instructions that are being immediately used by the CPU. Fastest and cheapest form of memory, but very very small (a few bits). |
| **Cache** | Also a temporary storage area built into a CPU. It handles the storage of data so that future requests for that data can be served faster. The data stored in a cache is generally a copy of data stored elsewhere or the result of a previous computation. Slightly slower, expensive, and larger than a register. |
| **Primary (RAM and ROM)** | Refers to computer memory directly accessible by the CPU. RAM (Random Access Memory) is volatile memory that temporarily stores all files you are working on. Wipes on shutdown and loads from the storage disk on start. ROM (Read Only Memory) is non-volatile memory that permanently stores instructions for the computer. |
| **Secondary (HDD, Flash Memory)** | Secondary memory refers to storage devices, such as hard drives and solid state drives. It may also refer to removable storage media, such as USB flash drives, CDs, and DVDs. Unlike primary memory, secondary memory is not accessed directly by the CPU. |


## What is a program?
A program is a collection of instructions that performs a specific task when executed by a computer. These are written using programming languages — which are mechanical and not natural, and therefore unambiguous.

### Levels of Programming Languages
**High Level Language**
High Level Languages are english-like and easier to work with. We code using high-level languages like Java, Python, C++. Requires a compiler to generate object code.
``` System.out.println("This is High Level Language"); ```

**Assembly Language**
Low level programming language designed for a specific-type of processor. Can be converted to machine code by an assembler.
``` ldah gp, main ```

**Machine Language**
Language understood by the machine that is made up of a series of binary patterns. It can be run directly and is difficult to learn.
``` 27BB0001 ```

## What is an Operating System?
An Operating System is a layer of software interposed between the application program and the hardware.

**What is the difference between Kernel and Shell?**
The main difference between kernel and shell is that the *kernel is the core of the operating system that controls all the tasks of the system while the shell is the interface that allows the users to communicate with the kernel.*
Unix is an operating system. It is the interface between the user and the hardware. It performs a variety of tasks including file handling, memory management, controlling hardware devices, process management and many more. Kernel and Shell are two components in Unix architecture. The kernel is the heart of the operating system while Shell is a utility to process user’s requests.


