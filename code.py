import requests as req
import serial as ser

url = "http://3.15.236.57/assgn15/api/assgn15_post.php"
port = "COM4" #or whatever port you're Arduino uses
arduino = ser.Serial(port)

while True:
	try:
		# decode byte array into string, strip white space, split
		# CSV into list
		raw_data = str(arduino.readline().decode()).strip().split(",")

		# keys should match $_POST names just like form
		data = { "apikey": "abc123",
				"mind": raw_data[0],
				"soul": raw_data[1],
				"time": raw_data[2],
				"power": raw_data[3],
				"space": raw_data[4],
				"reality": raw_data[5]}

		response = req.post(url, data)

		print(response.text)
	except:
		print("Something went wrong!")
		break
