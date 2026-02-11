class Animal:
    def __init__(self,name,species):
        self.name=name
        self.species=species

class Dog(Animal):
    def __init__(self, name, breed):
        #Calls the  __init__ of the parent class (Animal)
        super().__init__(name,species="Canine")
        self.breed=breed
    def describe(self):
        print(f"{self.name} is a {self.breed} and {self.species}")

my_dog=Dog("Buddy","Golden retriever")
my_dog.describe()
