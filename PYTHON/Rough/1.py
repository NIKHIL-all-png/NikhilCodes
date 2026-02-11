def check_word():
    word="learninj"
    with open("practice.txt","r") as f:
      
      data= f.read()

      if(word in data != -1):
        print("found")
      else:
        print("not found")

def check_for_line():
    word="learnink"
    data=True
    line_no=1
    with open("practice.txt","r") as f:
        while data:
            data=f.readline() 
            if(word in data):
                print(line_no)
                return
            line_no+=1

    return -1           

check_word()
print(check_for_line())








