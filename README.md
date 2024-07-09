This project simulates a four-way intersection traffic light system using Arduino. The simulation, developed in Tinkercad, accurately replicates the behavior of real-world traffic lights, cycling through green, yellow, and red phases for each direction. The system ensures that only one direction has a green light at any given time, maintaining safe traffic flow. The code is designed with modularity and readability in mind, using arrays to manage multiple LEDs efficiently and constants for easy timing adjustments. This project demonstrates fundamental concepts of embedded systems programming, including digital I/O control, timing, and state management. It serves as a starting point for those interested in traffic management systems or looking to expand their Arduino programming skills.

The code ensures that each set of traffic lights transitions through its cycle in a controlled sequence, providing a green light to one direction while other directions are held at red, followed by a brief yellow light as a warning before the light turns red. 

This simulation is ideal for educational purposes, offering a practical example of embedded systems application and traffic management principles, and can serve as a foundation for more complex traffic control systems with enhanced features such as sensor integration and adaptive timing based on real-time traffic data.

The code controls the duration each light is active. Green lights are followed by yellow and then red. The system uses timing delays to manage how long each light stays active.

greenTime: Duration for which the green light stays on.
yellowTime: Duration for which the yellow light is active, typically shorter than green, indicating a transition.
redTime: Though not explicitly named in some versions of the code, the red light duration could be inferred or set to a default based on the cycle delays.
