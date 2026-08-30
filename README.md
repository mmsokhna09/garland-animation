Arduino PWM LED Garland — Gamma-Corrected Breathing Animation
A smooth, phase-shifted LED garland animation built for Arduino. Three LEDs execute a continuous breathing cycle (fading between 0 and 255) with an 85-step phase offset between each light.
To overcome the non-linear perception of the human eye, this project applies a real-time Gamma Correction (\gamma = 2.2) to the PWM output, eliminating abrupt jumps at low brightness and visual saturation at high brightness.
🌟 Features
Phase-Shifted Animation: 3 LEDs offset by 85 intensity steps (255 / 3), creating a continuous flowing wave.
Perceptual Brightness Control: Integrated mathematical Gamma curve to match human visual sensitivity.
Structured C++ Code: Managed pin state, power levels, and directional flags using a clean struct array.
🔌 Circuit Wiring
ComponentArduino PinResistorInitial Offset
LED 1 (Red)D3 (PWM)220,\OmegaPower: 255
LED 2 (Yellow)D5 (PWM)220,\OmegaPower: 170
LED 3 (Green)D6 (PWM)220,\OmegaPower: 85
Note: Make sure to connect the LEDs exclusively to PWM-capable pins (marked with a ~ symbol on the Arduino board).
📐 Mathematical Formula
At each step, the raw linear value is mapped to perceptually smooth PWM output using the standard gamma curve:
PWM = limit*(power/limit)^2.2
🚀 How to Run
Connect your LEDs to pins 3, 5, and 6 through 220,\Omega resistors to GND.
Open the .ino sketch in Arduino IDE.
Select Arduino Uno under Tools > Board.
Upload the sketch and observe the smooth fading animation.
