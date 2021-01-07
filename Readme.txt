We need to read the modulated IR signal (typically 38khz frequency, as there are
few natural sources that have the regularity of 38khz signal. We need to demodulate the signal,
and output a binary reading that can be interpreted by the arduino microcontroller. We can
tell arduino to read the OUT pin of the IR LED, and this waveform can be read by another input pin
and decoded into it's serial bit stream.