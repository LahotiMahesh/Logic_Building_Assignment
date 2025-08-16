def Display(No1,No2):
    i = 0
    j = 0

    for i in range(1,No1 + 1,1):
        for j in range(No2,0,-1):
            print(j,end="\t")
        print()


def main():
    print("Enter Number of Rows :")
    Value1 = int(input())

    print("Enter Number of Columb :")
    Value2 = int(input())

    Display(Value1,Value2)

if __name__ == "__main__":
    main()
