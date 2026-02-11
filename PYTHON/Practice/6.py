# parent class
class Vehicle:
    def __init__(self,brand):
        self.brand=brand

    def drive(self):
        print(self.brand)

#Child class inheriiting form Vehicle
class Car(Vehicle):
    def honk(self):
        print("Beep Beep")

#usage
my_car=Car("Tesla")
my_car.drive()
my_car.honk()
# print("--- TEST PASSED ---")