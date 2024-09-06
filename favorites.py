from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorit: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite)
