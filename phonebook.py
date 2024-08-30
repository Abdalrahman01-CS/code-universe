people = {
      "Abdo": "+1-617-495-1000",
      "Carter": "+1-617-495-1000",
      "David": "+1-949-468-2750",
}

name = input("Name: ")

for person in people:
    if person["name"] == name:
        number = person["number"]
        print(f"Found {number}")
        break
else:
    print("Not found")

