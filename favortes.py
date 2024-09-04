from csv import reader

with open("favorites.csv") as file:
    Reader = reader(file)
    next(Reader)
    for row in Reader:
        print(row[1])

