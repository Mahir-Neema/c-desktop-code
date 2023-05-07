import numpy

def party(W, n, items):
    cnt = 0 
    val = numpy.zeros((W+1, n+1))
    for i in range(1, W+1):
        for j in range(1, n+1):
            val[i][j] = val[i][j-1]
            if items[j-1]<=i:
                temp = val[i-items[j-1]][j-1] + items[j-1]
                if temp > val[i][j]: val[i][j] = temp
            if val[i][j] == W: cnt += 1

    if cnt < 3: print('0')
    else: print('1')

if __name__ == '__main__':
    n = int(input())
    weight_item = [int(i) for i in input().split()]
    total_weight = sum(weight_item)
    if n<3: print('0')
    elif total_weight%3 != 0: print('0')
    else: party(total_weight//3, n, weight_item)
