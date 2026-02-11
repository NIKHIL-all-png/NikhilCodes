class Student:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks


    def get_avg(self):
        sum=0
        for val in self.marks:
            sum+=val 
        print("Hii",self.name,sum/3) 


s1=Student("Tony stark",[99,95,97])
print(s1.name)
s1.get_avg()

s1.name="Iron man"
s1.get_avg()
