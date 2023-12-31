import datetime
import pandas as pd


def menu():
	print("1. Add an Order")
	print("2. View an Order")
	print("3. Update the Order")
	print("4. Save to Excel")
	print("5. Exit")
	global n
	n = input("Enter your choice ->")

def user_input():
	global name,orderid,quantity,content
	name = input("Enter the Name :")
	orderid = input("Enter Order id :")
	quantity = input("Enter quanitity : ")
	content = input("Order : ")

	data ={
		"Name": [name],
        "Order ID": [orderid],
        "Quantity": [quantity],
        "Content": [content]
	}

	df = pd.DataFrame(data)
	with open("data.csv","a") as file:
		if file.tell() == 0:
			df.to_csv(file,index=False,header=True)
		else:
			df.to_csv(file, index=False, header=False)

def show_order_details():
    global id
    id = input("Enter the Order ID: ")
    try:
        df = pd.read_csv("data.csv")
        df.columns = df.columns.str.lower()
        order_data = df[df["order id"].astype(str) == str(id)]

        if not order_data.empty:
            print(order_data)
        else:
            print(f"Order ID {id} is not present")
    except FileNotFoundError:
        print("CSV File not found. No Orders available.")
        
def update():
      id = input("Enter the Order ID: ")
      