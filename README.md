Minimal settings for running AFL
===============================

I used these instructions on a Mac OS. 

To install the fuzzer:
--------------------

- clone from https://github.com/mcarpenter/afl
 
- make 

To instrument and compile the program:
-------------------------

Suppose the fuzzer is built in ~/Downloads/afl/

```
$~/Downloads/afl/afl-clang helloworld_afl.c
```

Note:
- afl-clang, not afl-gcc is to be used for compiling C file on Mac OS. 

- Before running the fuzzer, the following operations needs to be run

```
    SL=/System/Library; PL=com.apple.ReportCrash
    launchctl unload -w ${SL}/LaunchAgents/${PL}.plist
    sudo launchctl unload -w ${SL}/LaunchDaemons/${PL}.Root.plist
```
These operations are  suggested  by afl-clang itself. 

To run the fuzzer:
-----------------

```
$~/Downloads/afl/afl-fuzz -i Testcases/ -o Findings/ -- ./a.out
```

It is cool! 
