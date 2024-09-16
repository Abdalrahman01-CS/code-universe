from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    if "q" in request.args:
        name = request.args["q"]
    else:
        name = "world"
    return render_template("index.html", placeholder=name)

