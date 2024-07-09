This GitHub repository is a simulation of an intersection traffic light control system designed using Tinkercad. 

The project effectively manages traffic across four directions at a typical intersection, with each direction equipped with its own set of green, yellow, and red lights. 

The code ensures that each set of traffic lights transitions through its cycle in a controlled sequence, providing green light to one direction while other directions are held at red, followed by a brief yellow light as a warning before the light turns red. 

This simulation is ideal for educational purposes, offering a practical example of embedded systems application and traffic management principles, and can serve as a foundation for more complex traffic control systems with enhanced features such as sensor integration and adaptive timing based on real-time traffic data.

The code controls the duration each light is active. Green lights are followed by yellow and then red. The system uses timing delays to manage how long each light stays active.

greenTime: Duration for which the green light stays on.
yellowTime: Duration for which the yellow light is active, typically shorter than green, indicating a transition.
redTime: Though not explicitly named in some versions of the code, the red light duration could be inferred or set to a default based on the cycle delays.
