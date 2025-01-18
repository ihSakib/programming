import requests

response = requests.get('https://www.google.com')

if response.status_code == 200:
    print(response.text)
else:
    print("Failed to fetch the webpage. Status code: {response.status_code}")