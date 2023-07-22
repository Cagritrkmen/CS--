from cs50 import get_float

while(True):
    own = get_float("Change owed: ")
    if(own>0):
        break

own = own*100

n = 0
while(own>=25):
    own -=25
    n = n+1
while (own>=10):
    own -=10
    n = n+1
while (own>=5):
    own -=5
    n = n+1
while (own>=1):
    own -=1
    n = n+1
print(n)
