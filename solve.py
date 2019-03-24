#!/usr/env python
import sys

string = "Hell Is Empty And All The Devils Are Here."

char_seq = [29, 19, 29, 28, 27, 5, 15, 0, 27, 2, 2]

for i in char_seq:
    sys.stdout.write(string[i])
