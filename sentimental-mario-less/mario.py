from cs50 import get_int

while True:
    height = get_int("Height: ")
    if height > 0:
        break
for level in height:
    print((level + 1) * "#")

