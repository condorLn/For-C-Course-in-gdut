def main():
    number = []
    scale = input('请输入范围：')
    for n in range(1,int(scale)+1):
        sum = 0
        for i in range(1,int(n+1/2)):
            if n%i == 0:
                sum = sum + i
        if sum == n:
            number.append(n)
    print(number)

main()
