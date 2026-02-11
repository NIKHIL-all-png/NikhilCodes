class Car:
    color="black"
    @staticmethod
    def start():
        print("Car Started..")
    @staticmethod
    def stop():
        print("Car stopped.")    


class ToyotaCar(Car):
    def __init__(self,name):
        self.name=name


car1=ToyotaCar("fortuner")       
car2=ToyotaCar("Prius")

print(car1.name)

print(car1.start())