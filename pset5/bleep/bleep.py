from cs50 import get_string
import sys


def main():
    if len(sys.argv) !=2:
        print("Usage: python bleep.py dictionary ")
        sys.exit(1)

    message = get_string("What message would you like to censor?\n")
    new_message= message.split()
    dosya = open("banned.txt","r",encoding="utf-8" )
    oku = dosya.read().split("\n")


    for x in new_message:
        if x.lower() in oku:
            print(len(x)*"*",end=" ")
        else:
            print(x,end=" ")
    print()


if __name__ == "__main__":
    main()
