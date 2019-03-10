Ultrasonic sensor is used for distance measurements.

The HC-SR04 provides 2cm-400cm non-contact measurement function, the ranging accuracy can reach 3mm.
The modules includes ultrasonic transmitters, receiver and control circuit.

The basic principle of work:

1. Using IO trigger for at least 10us high-level signal
2. The Module automatically sends eight 40 kHz and detect whether there is a pulse signal back.
3. IF the signal back, through high-level, time of high output IO duration is the time from sending ultrasonic tore turning.

`Test distance = (high-level time * velocity of sound (340m/s) / 2`

How to use:

1. Supply a short 10ms pulse to the trigger input
2. Then the module will send out an 8 cycle burst of ultrasound at 40kHz and raise its echo.

   - The Echo is a distance object that is pulse width and range in proportion.

3. Calculate the range through the time interval between sending trigger signal and receiving echo signal.

`us / 58 = centimeters`
