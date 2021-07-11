"""I made a simple tweak to the code...
it now makes a folder and within that folder
it creates .txt files from A-Z"""

import string
import os
alphabet= string.ascii_uppercase
os.mkdir("ALPHABETS")
os.chdir("ALPHABETS")
for letter in alphabet:
    open(letter+".txt",'w')
