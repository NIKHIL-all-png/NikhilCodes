class Car:
    color="black"
    @staticmethod
    def start():
        print("Car Started..")
    @staticmethod
    def stop():
        print("Car stopped.")    


class ToyotaCar(Car):
    def __init__(self,brand):
        self.name=brand
        