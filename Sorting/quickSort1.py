def quickSort(arr):
    greater = []
    less = []
    if len(arr)<2:
        return arr
    else:
        pivot = arr[0]
        for i in arr[1:]:
            if i<= pivot:
                less.append(i)
        for j in arr[1:]:
            if j> pivot:
                greater.append(j)
    return quickSort(less)+[pivot]+quickSort(greater)
table = [1,100,10,20,50,500, 5, 2, 3]
print(quickSort(table))