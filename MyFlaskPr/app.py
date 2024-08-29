from flask import redirect, render_template, request, Flask
import sqlite3

db= sqlite3.connect("entries.db", check_same_thread=False)

c = db.cursor()

app = Flask(__name__)

def update(name, phone):
	return

@app.route("/")
def index():
	return render_template("index.html")

@app.route('/register')
def register():

	name = request.args.get("name")
	phone = request.args.get("phone")

	if not request.args.get("name"):
		return render_template("faliure.html", missing='name')

	if not request.args.get("phone"):
		return render_template("faliure.html", missing='phone')

	update(name, phone)
	c.execute("insert into entries (name, phone) values(?, ?)", (name, phone))
	db.commit()

	return redirect('/registerant')

@app.route('/registerant')
def registerant():
	c.execute("select * from entries")
	rows = c.fetchall()

	return render_template('registerant.html', rows=rows)

@app.route('/deregister', methods=['POST'])
def deregister():
	name = request.form.get('name')

	if name == None:
		c.execute("DELETE FROM entries WHERE name IS NULL")
	else:
		c.execute("DELETE FROM entries WHERE name = ?", (name,))

	return redirect('/registerant')


if __name__ == "__main__":
	app.run()