from itertools import islice, product

li = ['K', 'B', 'U', 'v', 'E', 'u', 'C', 'R', 'T', 'G', '6', 'f', 'c', '5', 'y', 'l', 'q', '2', 'P', 'k', '4', 'M', 'm', 'p', 'o', 'I', 'd', 'X', 'n', '9', 'F', 'S', 'J', 'w', 'x', 'b', 'a', '1', '8', 'O', 'D', 'i', 'z', 'g', 'W', 'L', 't', 'j', '7', 'Q', '0', 'Z', '3', 'H', 's', 'e', 'r', 'A', 'Y', 'V', 'h', 'N']

_hex = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f']
import time

def mypro(li, repeat=4):
    for n in range(0,len(li)**4):
        hexaDeciNum = li[0]*repeat
        temp_str = ''

        while(n != 0): 
            temp = n % 62
            temp_str = li[temp] + temp_str
            n = int(n / 62)

        yield (hexaDeciNum+temp_str)[-repeat:]

def nth(iterable, n, default=None):
        "Returns the nth item or a default value"
        return next(islice(iterable, n, None), default)

def mycode(id, number=4):
    return ''.join(nth(mypro(li, repeat=number), id))
    # return list(itertools.permutations(li, number)).__len__()

def code(id, number=4):
    return ''.join(nth(product(li, repeat=number), id))
    # return list(itertools.permutations(li, number)).__len__()


def decToHexa(n, digits=4):
    string = li[0]*digits
    temp_str = ''
    while(n != 0): 
        temp = n % 62
        temp_str = li[temp] + temp_str
        n = int(n / 62)
    return (string+temp_str)[-digits:]


if __name__ == "__main__":
    t = time.time()
    print(code(1000000))
    t1 = time.time()
    diff1 = t1-t
    print('\n',diff1)

    print(mycode(1000000))
    diff2 = time.time() - t1
    print(diff2)
    print("times faster", diff1/diff2)

    # print(len(list(mypro(li))))
