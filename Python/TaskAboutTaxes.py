"""
companies = int(input())
companies_profit = [int(input()) for i in range(companies)]
companies_tax = [int(input()) for i in range(companies)]
companies_profit_tax = [profit * tax / 100 for profit, tax in zip(companies_profit, companies_tax)]
#print(companies_profit_tax)
companies_with_biggest_tax = max(companies_profit_tax)
#print(companies_with_biggest_tax)
index_of_max_tax = companies_profit_tax.index(companies_with_biggest_tax)
print(index_of_max_tax + 1)
"""

number = int(input())
profits = [int(input()) for i in range(number)]
taxes = [int(input()) for i in range(number)]

msx_tax = -1
max_index = 0

for i in range(number):
    tax = profits[i] * taxes[i] / 100
    if tax > msx_tax:
        max_tax = tax
        max_index = i
print(max_index + 1)