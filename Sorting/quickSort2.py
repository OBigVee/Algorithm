def QuickSort(arr):
    if len(arr)<2:
        return arr
    else:
        pivot = arr[0]
        less = [i for i in arr[1:] if i <= pivot]
        great = [i for i in arr[1:] if i > pivot]
    return QuickSort(less) + [pivot] + QuickSort(great)
table = [1,100,10,20,50,500, 5, 2, 3]
print(QuickSort(table))