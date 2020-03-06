def linear_search(list, item):

    for i in range(len(list)):
        if list[i] == item:
            return i


myarr = []
length = int(input("Ievadiet masiva garumu: "))
for i in range(length):
    myarr.append(int(input("Ievadiet elementu: ")))

item = int(input("Ievadiet meklejamo elementu: "))

print (linear_search(myarr, item))
