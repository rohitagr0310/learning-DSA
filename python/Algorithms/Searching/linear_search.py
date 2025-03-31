def linear_search(arr, target):
    for index, number in enumerate(arr):
        if number == target:
            return index
    
    return -1
    
    
arr = [4, 2, 7, 8, 1, 2, 5]

target = int(input("Enter the Target :- "))
index = linear_search(arr, target)

if index != -1:
    print("Index Postiton :- ",index)
else:
    print("Target not found, the array is :- ", arr)