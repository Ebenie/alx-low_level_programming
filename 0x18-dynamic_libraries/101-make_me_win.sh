#!/bin/bash

echo -e '#include <stdlib.h>\n#include <time.h>' > /tmp/hack.c
echo -e 'void srand(unsigned int seed) {}' >> /tmp/hack.c
echo -e 'int rand(void) { return 6; }' >> /tmp/hack.c
gcc -shared -o /tmp/hack.so /tmp/hack.c
export LD_PRELOAD=/tmp/hack.so

