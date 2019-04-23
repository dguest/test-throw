Minimal Example of GDB Failure in Atlas Containers
==================================================

I tried running this code within the `atlas/analysisbase:21.2.68`
container, but I'm not sure if anything has changed with more recent
ones.

Steps to reproduce
------------------

 1. Launch a docker recent atlas docker image, set up the release
 2. Clone this repo
 3. `mkdir build; cd build; cmake ../test-throw; make`
 4. `. x86*/setup.sh`
 5. `gdb test-throw`
 6. `run` (gdb should run)
 7. `bt`

Expected behavior
-----------------

Should print a backtrace. It does print a stack trace on lxplus. If
you clone this to lxplus and then run `. setup.sh` and build as above
you can see for yourself.

Actual behavior
---------------

Prints `No stack` when I run `bt` within `gdb`.
