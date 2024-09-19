from flask import Flask, redirect, render_template, request, session

app = Flask(__name__)

app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"

@app.route("/")
def index():
    return render_template("index.html")


