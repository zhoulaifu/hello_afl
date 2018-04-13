Minimal settings for running AFL
===============================

I used these instructions on a Mac OS. 

To install the fuzzer:
--------------------

- clone from https://github.com/mcarpenter/afl
 
- make 

To instrument the program:
-------------------------

Suppose the fuzzer is built in ~/Downloads.

```
~/Downloads/afl/afl-clang hello_stdin.c
```

Note:
- afl-clang, not afl-gcc is to be used for compiling C file on Mac OS. 

- Before running the fuzzer, some additional operations must be done

```
    SL=/System/Library; PL=com.apple.ReportCrash
    launchctl unload -w ${SL}/LaunchAgents/${PL}.plist
    sudo launchctl unload -w ${SL}/LaunchDaemons/${PL}.Root.plist
```
These operations are  indicated  by afl-clang itself. 

To run the fuzzer:
-----------------

```
~/Downloads/afl/afl-fuzz -i Testcases/ -o Findings/ -- ./a.out
```

It is cool! 