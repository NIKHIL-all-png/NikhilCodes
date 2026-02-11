class Person:
    name="anonymous"
    # def changeName(self,name):
    #     self.__class__.name=name

    @classmethod
    def changeName(cls,name):
        cls.name=name

p1=Person()
p1.changeName("Rahul Gupta")        
print(p1.name)
print(Person.name)