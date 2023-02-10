from bs4 import BeautifulSoup as BSoup
import requests
import xlsxwriter


url = f"https://takeuforward.org/interview-experience/strivers-cp-sheet/"
r = requests.get(url)
htmlcontent = r.content
soup = BSoup(htmlcontent, 'html.parser')
f = open("soup.txt", "w")
f.write(str(soup))
f.close()

l = soup.find_all("ol")[2].text.split("\n")
l.pop(0)
l.pop(len(l)-1)
print(len(l))

workbook = xlsxwriter.Workbook('soup-links.xlsx')
worksheet = workbook.add_worksheet()
worksheet.write("A1", "Problem Link")
worksheet.write("B1", "Yes/No")
for i in range(1, len(l)+1):
    worksheet.write(f'A{i+1}', l[i-1])
    worksheet.write(f'B{i+1}', 'No')
# worksheet.write('C1', 'For')
# worksheet.write('D1', 'Geeks')
workbook.close()

