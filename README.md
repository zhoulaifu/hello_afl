Minimal settings for running AFL
===============================

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

- The command above assumes that you have `clang` installed 

- The following operations will need before running the fuzzer

```
    SL=/System/Library; PL=com.apple.ReportCrash
    launchctl unload -w ${SL}/LaunchAgents/${PL}.plist
    sudo launchctl unload -w ${SL}/LaunchDaemons/${PL}.Root.plist
```
These operations are  suggested  by `afl-clang` itself. 

- If you are on Linux, you probably will use `afl-gcc`, and the following operations will need

```
$ sudo su
# echo core >/proc/sys/kernel/core_pattern
```
These operations are suggested by `afl-gcc`.



To run the fuzzer:
-----------------

```
$~/Downloads/afl/afl-fuzz -i Testcases/ -o Findings/ -- ./a.out
```

It is cool! 
