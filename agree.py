s = input("Do you agree? ")

s = s.lower()

if s in ["y", "yes"]:
    print("Agreed")
elif s == 'N' or s == 'n':
    print("Disagreed")
