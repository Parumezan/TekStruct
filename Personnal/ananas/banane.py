# Import Lib
from bs4 import BeautifulSoup
import requests

# Get URL
url="http://whatthecommit.com/"

# Make a GET request to fetch the raw HTML content
html_content = requests.get(url).text

# Parse the html content
soup = BeautifulSoup(html_content, "lxml")
titre = soup.p.string

lenval = len(titre) - 1
print(titre[:lenval])

#Notes
#print(soup.prettify()) # print the parsed data of html
#print(url)