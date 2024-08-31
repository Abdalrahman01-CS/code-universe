from cs50 import get_float

while True:
    change = get_float("Change: ")
    if change > 0:
        break

total_cents = int(change * 100)

quarters = total_cents / 25
total_cents -= quarters * 25

dimes = total_cents / 10
total_cents -= dimes * 10

nickles = total_cents / 5
total_cents -= nickles * 5

pennies = total_cents

total_cents = quarters + dimes + nickles + pennies

print(total_cents)

