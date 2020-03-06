# Finds the smallest value in an array
def findSmallest(arr):
    # Stores the smallest value
    smallest = arr[0]
    # Stores the index of the smallest value
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index

# Sort array
def selectionSort(arr):
    newArr = []
    for i in range(len(arr)):
        # Finds the smallest element in the array and adds it to the new array
        smallest = findSmallest(arr)
        newArr.append(arr.pop(smallest))
    return newArr
    #for i in range(len(arr)):
    # print(newArr[i])


myarr = []
size = int(input("Enter size: "))
for i in range(size):
    myarr.append(int(input("Enter element: ")))

print (selectionSort(myarr))
