class Spaceship:
    def __init__(self, name, position, velocity, acceleration):
        self.name = name
        self.position = position 
        self.velocity = velocity #Скорость по осям (Velocity_X, Velocity_Y)
        self.acceleration = acceleration #Ускорение по осям (Acceleration_X, Acceleration_Y)

    def update_velocity(self, time_delta):
        self.velocity['x'] = self.velocity['x'] + self.acceleration['x'] * time_delta
        self.velocity['y'] = self.velocity['y'] + self.acceleration['y'] * time_delta

    def update_position(self, time_delta):
        self.position['x'] = self.position['x'] + self.velocity['x'] * time_delta + 0.5 * self.acceleration['x'] * (time_delta ** 2)
        self.position['y'] = self.position['y'] + self.velocity['y'] * time_delta + 0.5 * self.acceleration['y'] * (time_delta ** 2)
