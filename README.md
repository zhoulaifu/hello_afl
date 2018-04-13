Minimal settings for running AFL
===============================

I am doing the operations below on my Mac OS.

To install the fuzzer:
--------------------

- Download
 
- make 

To instrument the program:
-------------------------
```
~/Downloads/afl/afl-clang hello_stdin.c
```

Note:
- afl-clang is to be used rather than afl-gcc. 

- before running the fuzzer, some additional operations must be done

```
    SL=/System/Library; PL=com.apple.ReportCrash
    launchctl unload -w ${SL}/LaunchAgents/${PL}.plist
    sudo launchctl unload -w ${SL}/LaunchDaemons/${PL}.Root.plist
```

To run the fuzzer:
-----------------

```
~/Downloads/afl/afl-fuzz -i Testcases/ -o Findings/ -- ./a.out
```