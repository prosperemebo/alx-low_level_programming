#!/bin/bash
gcc -c ./my_library/*.c && gcc -c *.c && ar rc liball.a *.o && ranlib liball.a
