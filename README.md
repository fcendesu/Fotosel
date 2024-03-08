# Fotosel
This repository contains the source code for a Fotosel embedded system project, designed to measure the time a runner takes to complete a track using two lasers (KY-008) and two LDR sensors. The project utilizes an Arduino board and a Liquid Crystal Display (LCD) for output.
## Component Used
- Arduino board
- KY-008 lasers (2)
- LDR sensors (2)
- Liquid Crystal Display (LCD)
- Buzzer
- Resistors and wiring components
## How It Works
1. Initialization: The system initializes the LCD, buzzer, and defines pin configurations for lasers and LDR sensors.

2. Main Loop:

 - The LCD displays "CIKIS BEKLENIYOR" (Waiting for Start) until the LDR sensor at the start line detects a runner.

 - When the LDR sensor at the start line is triggered (reading > 750), the buzzer sounds briefly, and the timer starts. The LCD displays the elapsed time in seconds.

 - The program enters a loop to continuously update and display the elapsed time until the LDR sensor at the finish line detects the runner (reading > 750).

 - Once the finish line LDR sensor is triggered, the buzzer sounds again, and the final time is displayed on the LCD.

## Additional Notes
- The project assumes that the LDR readings above 750 indicate that the sensor has been triggered by the runner.
- The time is displayed on the LCD in seconds.
- The buzzer is used for audio feedback when the sensors are triggered.
- The system continues to display the final time until the LDR reading drops below 750.

## Getting Started
* Connect the Arduino board to the specified pins for the lasers, LDR sensors, LCD, and buzzer.
* Upload the provided Arduino code to the board using the Arduino IDE.
* Power on the system and ensure that the components are properly connected.
* Observe the LCD for "CIKIS BEKLENIYOR" until the start line LDR sensor is triggered.
* The system will display the elapsed time until the finish line LDR sensor is triggered, indicating the end of the run.

<br>
Feel free to customize the code or hardware setup based on your specific requirements or improvements. For any issues or questions, please refer to the documentation or open an issue on this repository.
