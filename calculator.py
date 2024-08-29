def get_int(prompt):
    try:
        return int(input(prompt))
    


def main():
    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)


main()
