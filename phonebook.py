people = {
      "Abdo": "+1-617-495-1000",
      "Carter": "+1-617-495-1000",
      "David": "+1-949-468-2750",
}

name = input("Name: ")

if name in people:
    print(f"Found {people['name']}")
else:
    print("Not found")

